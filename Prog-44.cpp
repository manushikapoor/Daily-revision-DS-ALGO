/* length of loop in linked list */

int count(struct Node* temp){
    Node* node=temp;
    int res=0;
    while(node!=temp->next){
        res++;
        temp=temp->next;
    }
    return res;
}
int countNodesinLoop(struct Node *head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        return count(slow);
    }
    return 0;
    
}
