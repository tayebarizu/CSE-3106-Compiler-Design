#include<bits/stdc++.h>
using namespace std;

int main(){
 string s;
 cin>>s;
 if(s.size()>=2 && s[s.size()-2]=='0' &&  s[s.size()-1]=='1')
    cout<<"ACCEPTED"<<endl;
 else
    cout<<"REJECTED"<<endl;
}
