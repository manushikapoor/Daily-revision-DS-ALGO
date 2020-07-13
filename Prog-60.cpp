/* find transition Point */

int transitionPoint(int arr[], int n) {
    int mid;
    int i=0;
    while(i<n){
        mid=(i+n-1)/2;
        if(arr[mid]==0 && arr[mid+1]==1)
        return mid+1;
        else if(arr[mid-1]==0 && arr[mid]==1)
        return mid;
        else if(arr[mid]==0 && arr[mid+1]==0)
        i=mid+1;
        else
        n=mid;
    }
    return -1;
}
