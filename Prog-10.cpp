/* swaps required to balance brackets */

#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int l=s.length();
if(l==0){
cout<<"0"<<endl;
return 0;
}
int c=0;
int swapp=0;
for(int i=0;i<l-1;i++){
if(s[i]=='(')
c++;
if(s[i]==')')
c--;
if(c<0){
if(s[i+1]=='('){
swapp++;
s[i]='(';
s[i+1]=')';
i=-1;
c=0;
}
}
cout<<swapp<<endl;
return 0;
}
