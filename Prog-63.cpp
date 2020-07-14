/* count-the-zeros O(logn) */

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int index=0;
	    int i=0,j=n-1;
	    while(i<j){
	        int mid=(i+j)/2;
	        if(a[mid]==1 && a[mid+1]==0){
	            index=mid+1;
	            break;
	        }
	        
	        else if(a[mid-1]==1 && a[mid]==0){
	            index=mid;
	            break;
	        }
	        else if(a[mid]==1 && a[mid+1]==1){
	            i=mid+1;
	        }
	        else
	        j=mid;
	        
	    }
	    cout<<n-index<<endl;
	}
	return 0;
}
