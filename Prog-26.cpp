/* diagonal sum of a binary tree */

void calculate(Node * node,map<int,int> res,int dis){
    if(root==NULL)
    return;
    res[dis]=res[dis]+node->data;
    
    calculate(node->right,res,dis);
    calculate(node->left,res,dis+1);
    
}
void diagonalSum(Node* root) {
    map<int,int> res;
    int dis=0;
    calculate(root,res,dis);
    
    map<int,int>::iterator it;
    for(it=res.begin();it<res.end();it++){
        cout<<it->second<<" ";
    }
}
