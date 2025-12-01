#include<bits/stdc++.h>
using namespace std;

string s;
int pos =  0;

bool S(){
 if(pos<s.size() && s[pos]=='a'){
    pos++;
    if(S()){
        if(pos<s.size()&&s[pos]=='b'){
            pos++;
            return true;
        }
        return false;
    }
        if(pos<s.size()&&s[pos]=='b'){
            pos++;
            return true;
        }
        return false;
    }
    return false;
}

int main(){
 cin>>s;
 pos = 0;
 if(S() && pos == s.size())
    cout<<"Valid\n";
 else
    cout<<"Invalid\n";
}
