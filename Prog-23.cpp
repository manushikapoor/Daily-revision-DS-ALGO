/* odd-even level difference binary tree */

int getLevelDiff(Node *root)
{
    if(root==NULL)
    return 0;
    
   int level=0,even=0,odd=0;
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       level++;
       int size=q.size();
       while(size){
           Node* node=q.front();
           q.pop();
           if(level%2==0){
               even+=node->data;
           }
           else{
               odd+=node->data;
           }
           if(node->left)
           q.push(node->left);
           if(node->right)
           q.push(node->right);
           
           size--;
       }
   }
   int res=odd-even;
   return res;
}
