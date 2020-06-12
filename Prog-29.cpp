/* vertical sum binary tree */

void verticalSumUtil(Node *node, int hd, 
                     map<int, int> &Map) 
{ 
    
    if (node == NULL) return; 
    Map[hd] += node->data; 
    verticalSumUtil(node->left, hd-1, Map); 
  
    verticalSumUtil(node->right, hd+1, Map); 
} 
  

void verticalSum(Node *root) 
{ 
    
    map < int, int> Map; 
    map < int, int> :: iterator it; 
  
    verticalSumUtil(root, 0, Map); 
  
    for (it = Map.begin(); it != Map.end(); ++it) 
    { 
        cout << it->second<<" "; 
    } 
} 
