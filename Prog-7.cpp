/* maximum subarray sum */

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int curr=0,maxx=-999999999;
	    for(int i=0;i<n;i++){
	        curr=max(curr+arr[i],arr[i]);
	        maxx=max(curr,maxx);
	    }
	    cout<<maxx<<endl;
	}
	return 0;
}
