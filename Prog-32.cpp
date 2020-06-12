/* Transform to sum tree */

int calculate(Node* Node){
    
    if(Node == NULL)  
    return 0;  
  
    int old_val = Node->data;  

    Node->data = calculate(Node->left) + calculate(Node->right);  

    return Node->data + old_val;  
    
}
void toSumTree(Node *node)
{
     calculate(node);
    
}
