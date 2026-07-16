/*
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void inorder(Node* root, Node*&prev){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,prev);
        
        prev->right = root;
        root->left = NULL;
        prev = root;
        
        inorder(root->right,prev);
    }
  
    Node *flattenBST(Node *root) {
        // code here
        Node* dummy = new Node(-1);
        Node* prev = dummy;
        
        inorder(root,prev);
        
        prev->right = NULL;
        
        Node* head = dummy->right;
        delete dummy;
        
        return head;
    }
};