/* sum of dependencies in a graph */

#include <iostream>
using namespace std;
int main() 
{
	int t; 
	cin>>t;
	while(t--)
	{
	    int n,e;  
	    cin>>n>>e;  
	    int a[2*e];
	    for(int i=0;i<2*e;i++) {
	        cin>>a[i];
	    }
	    cout<<e<<endl;
	}
	return 0;
}
