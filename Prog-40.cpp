/* Linked list insertion using tail to reduce time */

Node* tail=NULL;
// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
Node *temp=new Node(newData);
if(head==NULL)
{
tail=temp;
}
temp->next=head;
head=temp;
return head;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData) {

Node *temp=new Node(newData);

if(!head)
{
head=tail=temp;
}
else
{
tail->next=temp;
tail=temp;
}

return head;
}
