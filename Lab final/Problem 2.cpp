#include<bits/stdc++.h>
#include<cctype>
using namespace std;
 string s;
 int pos = 0;

 bool id(){
  if(pos>=s.size() || !isalpha(s[pos])) return 0;
  pos++;
  while(pos<s.size() && isalnum(s[pos]))
    pos++;
  return true;
 }

 bool number(){
  if(pos>=s.size()||!isdigit(s[pos])) return false;
  while(pos<s.size() && isdigit(s[pos]))
    pos++;
  return true;
 }

 bool E();

 bool F(){
     if(pos<s.size() && s[pos]=='('){
            pos++;
            if(!E()) return false;
            if(pos>=s.size()||s[pos]!=')') return false;
            pos++;
            return true;
        }
        return id() || number();
 }

 bool Tprime(){
   while(pos<=s.size() && (s[pos]=='*' || s[pos]=='/')){
    pos++;
    if(!F())
        return false;
   }
   return true;
 }
 bool T(){
  if(!F()) return false;
  return Tprime;
 }

 bool Eprime(){
  while(pos<s.size() && (s[pos]=='+'|| s[pos]=='-')){
    pos++;
    if(!T()) return false;
  }
  return true;
 }

 bool E(){
  if(!T()) return false;
  return Eprime();
 }

 int main(){
  getline(cin,s);
  if(E()&&pos==s.size())
    cout<<"Valid"<<endl;
  else
    cout<<"Invalid"<<endl;
 }
