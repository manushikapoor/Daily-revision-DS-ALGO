/* Having already mastered cooking, Chef has now decided to learn how to play the guitar. Often while trying to play a song, Chef has to skip several strings to reach the string he has to pluck. Eg. he may have to pluck the 1st string and then the 6th string. This is easy in guitars with only 6 strings; However, Chef is playing a guitar with 106

strings. In order to simplify his task, Chef wants you to write a program that will tell him the total number of strings he has to skip while playing his favourite song.

*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int arr[n];
        for(long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long int res=0;
        for(long int i=0;i<n-1;i++){
            res=res+(abs(arr[i]-arr[i+1])-1);
        }
        cout<<res<<endl;
    }
	// your code goes here
	return 0;
}
