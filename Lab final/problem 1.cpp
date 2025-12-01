#include<bits/stdc++.h>
#include<cctype>
using namespace std;

string s;
int pos = 0;
void skipSpace(){
 while(pos<s.size()&& isspace(s[pos]))
    pos++;
}
bool id(){
 skipSpace();
 if(pos>=s.size()) return false;
 if(!isalpha(s[pos])&&s[pos]!='_') return false;
 pos++;
 while(pos<s.size() && (isalnum(s[pos])||s[pos]=='_'))
    pos++;
 skipSpace();
 return true;
}

bool l(){
 if(!id()) return false;
 skipSpace();
 if(pos<s.size() && s[pos]==','){
    pos++;
    return l();
 }
 return true;
}

int main()
{
    getline(cin,s);
    if(l() && pos == s.size())
        cout<<"Valid"<<endl;
    else
        cout<<"Invalid"<<endl;
}
