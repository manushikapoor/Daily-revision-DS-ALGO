/* check if linked list is palindrome */

bool isPalindrome(Node *head)
{
    Node* node=head;
    stack<Node*> s;
    while(node!=NULL){
        s.push(node);
        node=node->next;
    }
    node=head;
    while(node!=NULL){
        Node* curr=s.top();
        s.pop();
        if(curr->data!=node->data){
            return false;
        }
        node=node->next;
    }
    return true;
}

