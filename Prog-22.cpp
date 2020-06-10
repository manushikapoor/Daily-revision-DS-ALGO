/* Bottom view of binary tree */

void bottomView(Node *root) 
{ 
    if (root == NULL) 
        return; 
  
    
    int hd = 0; 
  
   
    map<int, int> m; 
  
    
    queue<Node *> q; 
  
   
    root->hd = hd; 
    q.push(root);  
  
   
    while (!q.empty()) 
    { 
        Node *temp = q.front(); 
        q.pop();   
  
       
        hd = temp->hd; 
  
      
        m[hd] = temp->data; 
  
    
        if (temp->left != NULL) 
        { 
            temp->left->hd = hd-1; 
            q.push(temp->left); 
        } 
  
     
        if (temp->right != NULL) 
        { 
            temp->right->hd = hd+1; 
            q.push(temp->right); 
        } 
    } 
  
    for (auto i = m.begin(); i != m.end(); ++i) 
        cout << i->second << " "; 
} 
