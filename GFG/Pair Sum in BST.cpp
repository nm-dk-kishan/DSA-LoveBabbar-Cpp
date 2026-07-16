/*
Node is as follows
class Node {
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
    void inorder(Node* root, vector<int>& arr){
        
        if(root == NULL) 
            return ;
        
        
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    bool addpair(vector<int>& arr,int target){
        int i =0;
        int j = arr.size()-1;
        
        while(i<j){
            int sum = arr[i]+arr[j];
            if(sum == target){
                return true;
            }
            else if(sum < target){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
  
    bool findTarget(Node *root, int target) {
        // your code here.
        vector<int> arr;
        inorder(root,arr);
        
        return addpair(arr,target);
    }
};