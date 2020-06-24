/* pair wise swap linked list */

Node* pairWiseSwap(struct Node* head) {
    Node* node=head;
    while(node!=NULL && node->next!=NULL){
        swap(node->data,node->next->data);
        node=node->next->next;
    }
    return head;
    
}
