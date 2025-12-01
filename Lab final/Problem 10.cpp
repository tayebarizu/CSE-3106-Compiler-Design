#include<bits/stdc++.h>
#include<cctype>
using namespace std;

int main(){
 string s;
 bool block = false;
 while(getline(cin,s)){
    string out = "";
    for(int i=0; i<s.size();i++){
        if(!block &&  i+1<s.size()&&s[i]=='/'&&s[i+1]=='/') break;
    if(!block &&  i+1<s.size()&&s[i]=='/'&&s[i+1]=='*')
    {
        block = true;
        i++;
        continue;
    }
    if(block &&  i+1<s.size()&&s[i]=='*'&&s[i+1]=='/')
    {
        block = false;
        i++;
        continue;
    }
    if(!block) out+=s[i];
    }
    if(!block)
        cout<<out<<endl;
 }
}
