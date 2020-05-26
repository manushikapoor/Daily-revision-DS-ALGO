

/* C++ program to print level order traversal using STL */
#include <bits/stdc++.h> 
using namespace std; 

// A Binary Tree Node 
struct Node 
{ 
	int data; 
	struct Node *left, *right; 
}; 

void levelOrder(Node* node)
{
    if(node==NULL){
        return;
    }
    
    queue<Node*> q;
    q.push(node);
    while(q.empty()==false){
        Node * result=q.front();
        cout<<result->data<<" ";
        q.pop();
        if(result->left){
            q.push(result->left);
        }
        if(result->right){
            q.push(result->right);
        }
        
    }
 
}

// Utility function to create a new tree node 
Node* newNode(int data) 
{ 
	Node *temp = new Node; 
	temp->data = data; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

// Driver program to test above functions 
int main() 
{ 
	
	Node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 

	cout << "Level Order traversal of binary tree is \n"; 
	levelOrder(root); 
	return 0; 
} 
