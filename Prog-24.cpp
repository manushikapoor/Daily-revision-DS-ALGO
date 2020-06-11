/* sum of right leaf nodes */

void calculate(Node* root,Node* parent,int &sum){
    if(root==NULL)
    return;
    
    if(root->left==NULL && root->right==NULL && parent->right==root){
    sum+=root->data;
    return;
    }
    calculate(root->left,root,sum);
    calculate(root->right,root,sum);
}
int rightLeafSum(Node* root)
{
   if(root==NULL)
    return 0;
    
    int sum=0;
    Node* parent=NULL;
    calculate(root,parent,sum);
       
    return sum;    
   
}
