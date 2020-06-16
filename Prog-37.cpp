/* Chef owns an icecream shop in Chefland named scoORZ. There are only three types of coins in Chefland: Rs. 5, Rs. 10 and Rs. 15. An icecream costs Rs. 5.

There are N people (numbered 1 through N) standing in a queue to buy icecream from scoORZ. Each person wants to buy exactly one icecream. For each valid i, the i-th person has one coin with value ai. It is only possible for someone to buy an icecream when Chef can give them back their change exactly ― for example, if someone pays with a Rs. 10 coin, Chef needs to have a Rs. 5 coin that he gives to this person as change.

Initially, Chef has no money. He wants to know if he can sell icecream to everyone in the queue, in the given order. Since he is busy eating his own icecream, can you tell him if he can serve all these people?*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int five=0,ten=0,fifteen=0,flag=0;
        for(int i=0;i<n;i++){
            if(arr[0]!=5){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            else{
                if(arr[i]==5){
                    five++;
                }
                else if(arr[i]==10){
                    if(five>0){
                        five--;
                        ten++;
                    }
                    else{
                        cout<<"NO"<<endl;
                        flag=1;
                        break;
                    }
                }
                else{
                    if(ten>0){
                        ten--;
                        fifteen++;
                    }
                    else if(five>1){
                        five=five-2;
                        fifteen++;
                    }
                    else{
                        cout<<"NO"<<endl;
                        flag=1;
                        break;
                    }
                }
                
            }
        }
        if(flag==0)
        cout<<"YES"<<endl;
    }
	// your code goes here
	return 0;
}
