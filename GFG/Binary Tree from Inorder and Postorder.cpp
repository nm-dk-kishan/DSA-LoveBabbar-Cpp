/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
    
    void createMapping(vector<int>& in, map<int, int>& nodeToIndex, int n) {
		
		for (int i = 0; i < n; i++) {
			nodeToIndex[in[i]] = i;
		}
	}
	
	Node* solve(vector<int>& in,
	vector<int>& post,
	int& index,
	int inorderStart,
	int inorderEnd,
	int n,
	map<int, int>& nodeToIndex) {
		
		if (index < 0 || inorderStart > inorderEnd) {
			return NULL;
		}
		
		int element = post[index--];
		Node* root = new Node(element);
		
		int position = nodeToIndex[element];
		
		root->right = solve(in, post, index,
		position + 1,
		inorderEnd,
		n,
		nodeToIndex);
		
		root->left = solve(in, post, index,
		inorderStart,
		position - 1,
		n,
		nodeToIndex);
		
		
		return root;
	}
    
  public:
    Node *buildTree(vector<int> &in, vector<int> &post) {
        // code here
        
		int n = post.size();
		int postorderIndex = n-1;
		
		map<int, int> nodeToIndex;
		
		createMapping(in, nodeToIndex, n);
		
		return solve(in,
		post,
		postorderIndex,
		0,
		n - 1,
		n,
		nodeToIndex);
    }
};