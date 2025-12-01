#include<bits/stdc++.h>
#include<cctype>
using namespace std;

int main(){
 string s;
 getline(cin,s);
 int i = 0;
 while(i<s.size()){
    if(isspace(s[i])){i++; continue;}
    if(isalpha(s[i])||s[i]=='_'){
        string t = "";
        t += s[i++];
        while(i<s.size() && (isalnum(s[i]) || s[i]=='_'))
            t+=s[i++];
        cout<<"IDENTIFIER: : "<<t<<endl;
    }
    else if(isdigit(s[i])){
        string t = "";
        while(i<s.size()&& isdigit(s[i]))
        t+= s[i++];
        cout<<"NUMBER: "<<t<<endl;
    }
    else {
        cout<<"SYMBOL: " << s[i]<<endl;
        i++;
    }
 }
}
