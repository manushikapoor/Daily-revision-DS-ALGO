/* nth fibonacci number using dp */

#include <iostream>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    long int dp[n+2];
	    dp[0]=0;
	    dp[1]=1;
	    for(long int i=2;i<=n;i++){
	        dp[i]=(dp[i-1]+dp[i-2])%1000000007;
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
