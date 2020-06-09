/* Right view of a binary tree */

void printResult(Node * root,int *level_visited,int level){
    if(root==NULL)
    return;
    
    if(level>*level_visited){
        *level_visited=level;
        cout<<root->data<<" ";
    }
    printResult(root->right,level_visited,level+1);
    printResult(root->left,level_visited,level+1);
}

void rightView(Node *root)
{
    int level_visited=0;
    
    printResult(root,&level_visited,1);
   
}
