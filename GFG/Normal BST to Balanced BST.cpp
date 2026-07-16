/*Structure of the Node of the BST is as
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {

  public:
  
    void inorder(Node* root,vector<Node*>& nodes){
        if(root == NULL) return ;
        
        inorder(root->left,nodes);
        nodes.push_back(root);
        inorder(root->right,nodes);
    }
  
    Node* balanceTree(vector<Node*>& nodes,int start,int end){
        if(start>end) return NULL;
        
        int mid = start+ (end-start) /2;
        
        Node* root = nodes[mid];
        
        root->left = balanceTree(nodes,start,mid-1);
        root->right = balanceTree(nodes,mid+1,end);
        
        return root;
    }
  
    Node* balanceBST(Node* root) {
        // Code here
        vector<Node*> nodes;
        
        inorder(root,nodes);
        
        return balanceTree(nodes,0,nodes.size()-1);
    }
};