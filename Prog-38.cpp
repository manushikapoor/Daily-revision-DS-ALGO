/* As usual, Tom and Jerry are fighting. Tom has strength TS and Jerry has strength JS. You are given TS and your task is to find the number of possible values of JS such that Jerry wins the following game.

The game consists of one or more turns. In each turn:

If both TS and JS are even, their values get divided by 2 and the game proceeds with the next turn.
If both TS and JS are odd, a tie is declared and the game ends.
If TS is even and JS is odd, Tom wins the game.
If TS is odd and JS is even, Jerry wins the game.
Find the number of possible initial values of JS such that 1≤JS≤TS, there is no tie and Jerry wins the game.*/

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int res=0;
        if(n%2!=0){
            res=n/2;
            cout<<res<<endl;
        }
        else{
            while(n%2==0){
                n=n/2;
            }
            res=n/2;
            cout<<res<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
