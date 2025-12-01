#include<bits/stdc++.h>
using namespace std;

string s;
int pos =0;
bool S(){
 if(pos<s.size() && s[pos] == '('){
        pos++;
 if(!S()) return false;
 if(pos>=s.size()||s[pos]!=')') return false;
 pos++;
 return S();
 }
 return true;
}

int main(){
 cin>>s;
 if(S() && pos == s.size())
    cout<<"Valid"<<endl;
 else
    cout<<"Invalid"<<endl;
}
