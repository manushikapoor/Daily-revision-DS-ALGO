/* K-distance from root */

void printKdistance(struct Node *root, int k)
{
    int level=0;
    queue<Node*> q;
    q.push(root);
    while(q.size()){
        if(k==level){
            while(q.size()){
                Node* res=q.front();
                cout<<res->data<<" ";
                q.pop();
            }
            return;
        }
        Node * node=q.front();
        q.pop();
        if(node->left!=NULL)
        q.push(node->left);
        if(node->right!=NULL)
        q.push(node->right);
        level++;
    }
}
