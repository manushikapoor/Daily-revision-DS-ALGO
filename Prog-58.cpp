/* Chef has N axis-parallel rectangles in a 2D Cartesian coordinate system. These rectangles may intersect, but it is guaranteed that all their 4N

vertices are pairwise distinct.

Unfortunately, Chef lost one vertex, and up until now, none of his fixes have worked (although putting an image of a point on a milk carton might not have been the greatest idea after all…). Therefore, he gave you the task of finding it! You are given the remaining 4N−1
points and you should find the missing one. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int v=4*n-1;
        int x[v],y[v];
        for(int i=0;i<v;i++){
            cin>>x[i]>>y[i];
        }
        int res1,res2;
        sort(x,x+v);
        sort(y,y+v);
        res1=x[v-1];
        res2=y[v-1];
        for(int i=0;i<v-1;i+=2){
            if(x[i]!=x[i+1]){
                res1=x[i];
                break;
            }
        }
        for(int i=0;i<v-1;i+=2){
            if(y[i]!=y[i+1]){
                res2=y[i];
                break;
            }
        }
        cout<<res1<<" "<<res2<<endl;
    }
	// your code goes here
	return 0;
}
