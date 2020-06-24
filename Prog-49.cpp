/* reverse a linked list */

struct Node* reverseList(struct Node *head)
{
    Node* prev=NULL;
    Node* next=NULL;
    Node* curr=head;
    
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
