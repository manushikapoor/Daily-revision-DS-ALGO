/* Chef has N items in his shop (numbered 1 through N); for each valid i, the price of the i-th item is Pi. Since Chef has very loyal customers, all N items are guaranteed to be sold regardless of their price.

However, the government introduced a price ceiling K, which means that for each item i such that Pi>K, its price should be reduced from Pi to K.

Chef's revenue is the sum of prices of all the items he sells. Find the amount of revenue which Chef loses because of this price ceiling. */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<l;i++){
            if(arr[i]>n)
            sum=sum+(arr[i]-n);
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
