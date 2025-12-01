#include<bits/stdc++.h>
using namespace std;

int main(){
 string s;
 cin>>s;
 bool q0=true, q1= false;
 for(char c:s){
    bool nq0 = false, nq1 = false;
    if(q0 && c =='a') nq1 = true;
    if(q1 && (c=='b'|| c=='c'))
        nq1  = true;
    q0 = nq0;
    q1 = nq1;
 }
 cout<<(q1?"Accepted" : "Rejected");
}
