

// C++ program to count occurrences of an element 
// in a sorted array. 
# include <bits/stdc++.h> 
using namespace std; 

int count(int arr[], int x, int n) 
{	 
int *low = lower_bound(arr, arr+n, x); 
if (low == (arr + n) || *low != x) 
	return -1; 

int *high = upper_bound(low, arr+n, x);	 

return high - low; 
} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int l,n;
        cin>>l>>n;
        int a[l];
        for(int i=0;i<l;i++){
            cin>>a[i];
        }
        int c = count(a, n, l); 
cout<<c<<endl;
    }

return 0; 
} 
