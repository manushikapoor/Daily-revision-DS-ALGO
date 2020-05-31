/* Given an input string, write a function that returns the Run Length Encoded string for the input string.
For example, if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6”.  */

#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 
	int t;
	std::cin >> t;
	while(t--){
	    string s;
	    cin>>s;
	    int l=s.length();
	    for(int i=0;i<l-1;i++){
	        int c=1;
	        while(i<l-1 && s[i]==s[i+1]){
	            c++;
	            i++;
	        }
	        cout<<s[i]<<c;
	    }
	}
    
     
	return 0; 
} 

