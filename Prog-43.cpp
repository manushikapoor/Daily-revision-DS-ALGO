/* Detect loop in linked list */

int detectloop(Node *head) {
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        return 1;
    }
    return 0;
}
