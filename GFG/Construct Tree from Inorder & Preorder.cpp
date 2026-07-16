/*
Definition for Node
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
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
	vector<int>& pre,
	int& index,
	int inorderStart,
	int inorderEnd,
	int n,
	map<int, int>& nodeToIndex) {
		
		if (index >= n || inorderStart > inorderEnd) {
			return NULL;
		}
		
		int element = pre[index++];
		Node* root = new Node(element);
		
		int position = nodeToIndex[element];
		
		root->left = solve(in, pre, index,
		inorderStart,
		position - 1,
		n,
		nodeToIndex);
		
		root->right = solve(in, pre, index,
		position + 1,
		inorderEnd,
		n,
		nodeToIndex);
		
		return root;
	}
	
	public:
	Node* buildTree(vector<int>& in, vector<int>& pre) {
		
		int preorderIndex = 0;
		int n = pre.size();
		
		map<int, int> nodeToIndex;
		
		createMapping(in, nodeToIndex, n);
		
		return solve(in,
		pre,
		preorderIndex,
		0,
		n - 1,
		n,
		nodeToIndex);
	}
};
