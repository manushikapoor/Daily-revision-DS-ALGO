/*	
The cost of a stock on each day is given in an array, find the max profit that you can make by buying and selling in those days. 	
For example, if the given array is {100, 180, 260, 310, 40, 535, 695}, the maximum profit can earned by buying on day 0, selling on day 3.	
Again buy on day 4 and sell on day 6. If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.	
dummy data
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int l;                 //length of array
    cin >> l;
    int a[l];
    int buy,sell,profit=0;
    int flag=0;
    
    for(int i=0;i<l;i++){  // taking input 
        cin>>a[i];
    }
    
    int j;
    for(j=0;j<l-1;j++){   // if next cost is more,buy at current cost (minima)
        if(a[j+1]>a[j]){  //finding initial cost to buy
            buy=a[j];
            flag=1;
            break;
        }
    }
    
    if(flag==0){        // if next cost is not more at any time(descending order)
        cout<<"No Profit"<<endl;
        return 0;
    }
    
    for(int i=j;i<l;i++){
        if(a[i+1]<a[i] || i==l-1){ //if next cost is less, sell at current cost (maxima)
            sell=a[i];
            profit=profit+(sell-buy);
            if(i!=l-1){
            for(int k=i+1;k<l;k++){  //finding cost to buy
                if(a[k+1]>a[k]){
                buy=a[k];
              	i=k;   						// continue traversing from the cost you bought
                break;
                }
            	}
            }
            
        }
        
    }
        cout<<profit<<endl;
    }
    
    return 0;
}
