/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<TreeNode*>& nodes){
        if(root == NULL) return ;
        
        inorder(root->left,nodes);
        nodes.push_back(root);
        inorder(root->right,nodes);
    }
  
    TreeNode* balanceTree(vector<TreeNode*>& nodes,int start,int end){
        if(start>end) return NULL;
        
        int mid = start+ (end-start) /2;
        
        TreeNode* root = nodes[mid];
        
        root->left = balanceTree(nodes,start,mid-1);
        root->right = balanceTree(nodes,mid+1,end);
        
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> nodes;
        
        inorder(root,nodes);
        
        return balanceTree(nodes,0,nodes.size()-1);
    }
};