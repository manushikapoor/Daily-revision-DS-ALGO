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
                if(a[k+1]>a[k])
                buy=a[k];
              	i=k;   						// continue traversing from the cost you bought
                break;
            	}
            }
            
        }
        
    }
        cout<<profit<<endl;
    }
    
    return 0;
}
