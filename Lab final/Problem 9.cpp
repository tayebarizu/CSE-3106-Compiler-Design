#include<bits/stdc++.h>
#include<cctype>
using namespace std;

bool isKeyword(string w){
 string k[] = {"int", "if", "for", "else", "while","return","char","float","double","void"};
 for(string x:k) if(x ==w) return true;
 return false;
}
 bool isID(string w){
  if(!isalpha(w[0])&&w[0]!='_') return false;
  for(char c:w)
    if(!isalnum(c)&&c!='_') return false;
  return true;
 }

 int main(){
  string w;
  while(cin>>w){
    if(isKeyword(w))
        cout<<w<<":Keyword"<<endl;
    else if(isID(w))
       cout<<w<<":Identifier"<<endl;
    else
        cout<<w<<":Ivalid"<<endl;
  }
 }
