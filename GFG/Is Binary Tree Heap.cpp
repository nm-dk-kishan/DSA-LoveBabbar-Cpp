/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    
    int countnode(Node* tree){
        if(!tree) return 0;
        return 1+countnode(tree->left)+countnode(tree->right);
    }
    
    bool isCBT(Node* tree, int index,int totalnodes){
        if(!tree) return true;
        
        if(index>=totalnodes) return false;
        
        return isCBT(tree->left,2*index+1,totalnodes) &&
               isCBT(tree->right,2*index+2,totalnodes);
    }
    
    bool ismaxheap(Node* root){
        if(!root) 
            return true;
        
        if(!root->left && !root->right)
           return true;
           
        if(!root->right){
            return (root->data>=root->left->data) &&
                    ismaxheap(root->left);
        }        
        return  (root->data>=root->left->data) &&
                (root->data>=root->right->data) &&
                ismaxheap(root->left) &&
                ismaxheap(root->right);
        
    }
    
    bool isHeap(Node* tree) {
        // code here
        int totalnodes = countnode(tree);
        
        return  isCBT(tree,0,totalnodes) &&
                ismaxheap(tree);
    }
};