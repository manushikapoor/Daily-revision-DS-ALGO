/* The chef has received a problem from his friend who is a chemist. He has got n candies. This all candies have some sucrose level.
He has to eat such candy whose sucrose level is the difference of sucrose level of candy with maximum and minimum sucrose level.*/

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
        sort(a,a+l);
        int d=a[l-1]-a[0];
        
        if(binary_search(a, a + l, d)){
            std::cout << d << std::endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
