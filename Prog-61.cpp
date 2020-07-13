/* Binary Array Sorting */

vector<int> SortBinaryArray(vector<int> binArray)
{
    int i=0,j=binArray.size()-1;
    while(i<j){
        while(binArray[i]==0 && i<j){
            i++;
        }
        while(binArray[j]==1 && i<j){
            j--;
        }
        if(binArray[i]>binArray[j]){
            binArray[i]=0;
            binArray[j]=1;
            i++;
            j--;
        }
    }
    return binArray;
}
