/* remove-all-duplicates-from-a-given-string */

#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         unordered_map<char,int> f;
         string s;
       cin>>s;
        
         
         for(int i=0;s[i]!='\0';i++)
           {
              if(f[s[i]]==0)
              {  cout<<s[i];
                 f[s[i]]=1;
               }
                         
           }
      
    cout<<"\n";
     }
	return 0;
}
