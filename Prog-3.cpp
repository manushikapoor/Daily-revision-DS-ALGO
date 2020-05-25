/* Chef has a friend who is a chemistry teacher. His friend took a test of his students and wants to find the toppers but he falls sick. He assigns this work to chef.

The number of toppers refers to elements in array WHICH HAVE ALL SMALLER ELEMENTS TO ITS RIGHT.

You can Left-Rotate array maximum n number of times, till you find the maximum number of toppers.

After you find, the count of maximum number of toppers print it to the output. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int l;
        cin>>l;
        int a[l];
        for(int i=0;i<l;i++){
            cin>>a[i];
        }
        
        int r=1;
        int flag=0;
        for(int i=0;i<l-1;i++){
            flag=0;
            for(int j=i+1;j<l;j++){
                if(a[i]<=a[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                r++;
            }
        }
        for(int i=0;i<l;i++){
            if(a[l-1]>a[0]){
                int first=a[0];
                for(int j=0;j<l-1;j++){
                    a[j]=a[j+1];
                }
                a[l-1]=first;
                r++;
            }
        }
        
        std::cout << r << std::endl;

    
    }
    
	// your code goes here
	return 0;
}
