/* There are N students standing in a row and numbered 1 through N from left to right. You are given a string S with length N, where for each valid i, the i-th character of S is 'x' if the i-th student is a girl or 'y' if this student is a boy. Students standing next to each other in the row are friends.

The students are asked to form pairs for a dance competition. Each pair must consist of a boy and a girl. Two students can only form a pair if they are friends. Each student can only be part of at most one pair. What is the maximum number of pairs that can be formed?*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='x'&& s[i+1]=='y'){
                n++;
                i++;
            }
            else if(s[i]=='y'&&s[i+1]=='x'){
                n++;
                i++;
            }
        }
        cout<<n<<endl;
    }
	// your code goes here
	return 0;
}
