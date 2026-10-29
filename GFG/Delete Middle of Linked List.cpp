/* Node Structure
struct Node {
	int data;
	struct Node* next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */

class Solution {
	public:
	Node* deleteMid(Node* head) {
		// code here
		if (head == NULL || head->next == NULL) {
			return NULL;
		}
		
		Node* prev = NULL;
		Node* slow = head;
		Node* fast = head;
		
		while (fast != NULL && fast->next != NULL) {
			prev = slow;
			
			slow = slow->next;
			fast = fast->next->next;
			
		}
		
		prev->next = slow->next;
		delete(slow);
		
		return head;
	}
};
