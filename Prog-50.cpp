/* Nth node linked list */

int GetNth(struct node* head, int index){
  
  node* curr=head;
  for(int i=1;i<index;i++){
      curr=curr->next;
  }
  return curr->data;
}
