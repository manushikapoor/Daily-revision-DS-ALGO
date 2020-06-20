/* remove duplicates from unsorted linked list */

Node * removeDuplicates( Node *head) 
{
    Node* Head=head;
    Node* prev=NULL;
    unordered_set<int> visited;
    while(head!=NULL){
        if(visited.find(head->data)!=visited.end()){
            prev->next=head->next;
            delete(head);
        }
        else{
            visited.insert(head->data);
            prev=head;
        }
        
        head=head->next;
    }
    return Head;
 
}
