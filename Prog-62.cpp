/* maximum-sum-lengths-non-overlapping-subarrays-k-max-element */

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
        int k,res=0;
        cin>>k;
        int flag=0,i=0,c=0;
        while(i<n){
            flag=0;
            c=0;
            while(a[i]<=k && i<n){
                //cout<<"h";
                
                c++;
                if(a[i]==k)
                flag=1;
                i++;
            }
            if (flag==1)
            res=res+c;
            while(a[i]>k && i<n){
                i++;
            }
            
        }
        cout<<res<<endl;
    }
	return 0;
}
