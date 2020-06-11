/* max level sum */

int maxLevelSum(Node* root) {
    if(root==NULL)
    return 0;
    
    int level=0,sum=0;
    queue<Node*> q;
    q.push(root);
    int max=INT_MIN;
    
    while(q.empty()==false){
        int size=q.size();
        level++;
        sum=0;
        while(size){
            Node* node=q.front();
            q.pop();
            sum=sum+node->data;
           
            if(node->left)
            q.push(node->left);
            if(node->right)
            q.push(node->right);
            size--;
        }
         if(sum>max)
            max=sum;
    }
    return max;
}
