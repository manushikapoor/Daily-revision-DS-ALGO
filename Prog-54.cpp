/* Given an array with every element occuring twice, find the single element that occurs only once. */

#include <bits/stdc++.h> 
using namespace std; 

int find(int ar[]) 
	{ 
		int res = ar[0]; 
		for (int i = 1; i < ar.length(); i++) 
			res = res ^ ar[i]; 
		return res; 
	} 

int main() 
	{ 
    int n;
    cin>>n;
		int ar[n]; 
    for(int i=0;i<n;i++){
    cin>>ar[i];
    }
		cout<< find(ar); 
		return 0; 
	} 
