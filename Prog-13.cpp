/* check if two trees are mirror of each other */

void mirror(struct Node* node) 
{ 
	if (node == NULL) 
		return; 
	else
	{ 
		struct Node* temp; 
	
		mirror(node->right); 
			mirror(node->left); 
	
		/* swap the pointers in this node */
		temp	 = node->left; 
		node->left = node->right; 
		node->right = temp; 
	} 
} 
