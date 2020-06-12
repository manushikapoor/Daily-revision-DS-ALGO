/* check if a tree is symmetric or not */

bool helper(Node* root1, Node* root2){
if(!root1 and !root2) return true;

if(root1 and root2 and root1->data==root2->data)
return (helper(root1->left,root2->right) and helper(root1->right, root2->left));

return false;
}
bool isSymmetric(struct Node* root)
{
helper(root,root);
}
