/* Remove half nodes */

Node *RemoveHalfNodes(Node *root)
{
    if(root==NULL)
    return NULL;
    
    root->left=RemoveHalfNodes(root->left);
    root->right=RemoveHalfNodes(root->right);
    
    if(root->left==NULL && root->right==NULL)
    return root;
    
    if(root->left==NULL){
        Node* node=root->right;
        free(root);
        return node;
    }
    
    if(root->right==NULL){
        Node* node=root->left;
        free(root);
        return node;
    }
    return root;
}
