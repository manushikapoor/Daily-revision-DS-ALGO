/* maximum node level */

int maxNodeLevel(Node *root)
{
    if(root==NULL)
    return -1;
    
    queue<Node*> q;
    q.push(root);
    
    int max=0;
    int level=0;
    int res=0;
    int n=q.size();
    while(true){
        if(q.size()==0)
        break;
        if(max<n){
            max=n;
            res=level;
        }
        while(n>0){
            Node* node=q.front();
            q.pop();
            
            if(node->left!=NULL)
            q.push(node->left);
            if(node->right!=NULL)
            q.push(node->right);
            n--;
        }
        level++;
    }
 return res;
}
