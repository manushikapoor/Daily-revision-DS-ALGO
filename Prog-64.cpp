/* Index of an extra element in O(logn) */

int findExtra(int a[], int b[], int n) {
    int i=0,ans=0;
    int i2=n-1;
    while(i<=i2){
        int mid1=(i+i2)/2;
        
        if(a[mid1]==b[mid1]){
            i=mid1+1;
            
        }
        else {
           i2=mid1-1;
           
           ans=mid1;
        }
        
        
    }
    return ans;
    // add code here.
}
