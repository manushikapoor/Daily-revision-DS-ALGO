/* remove duplicates linked list */

Node *removeDuplicates(Node *root)
{
    if(root==NULL)
    return NULL;
    Node* head=root;
    while(root->next!=NULL){
        if(root->data==root->next->data){
            free(root->next);
            root->next=root->next->next;
            
        }
        else{
            root=root->next;
        }
    }
    return head;
 // your code goes here
}
