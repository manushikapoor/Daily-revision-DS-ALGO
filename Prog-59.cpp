/* rotate array k times */

#include <iostream>
using namespace std;

int main() {
int t;
    cin>>t;
    while(t--){
        int l,k;
        cin>>l>>k;
        int arr[l];
        for(int i=0;i<l;i++){
            cin>>arr[i];
        }
        k=k%l;
        int brr[k];
        int j=0;
        for(int i=0;i<k;i++){
            brr[j]=arr[i];
            j++;
        }
        
        for(int i=k;i<l;i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<k;i++){
            cout<<brr[i]<<" ";
        }
        cout<<"\n";
    }
	
	return 0;
}
