/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}
};
*/
class Solution {
	public:
	Node* deleteNode(Node* head, int x) {
		// code here
		if (head == NULL) {
			return NULL;
		}
		
		if (x == 1) {
			Node* temp = head;
			head = head->next;
			delete temp;
			return head;
		}
		
		Node* curr = head;
		
		for (int i = 1; i<x - 1; i++) {
			curr = curr->next;
		}
		if (curr != nullptr && curr->next != nullptr) {
            Node* temp = curr->next;       
            curr->next = curr->next->next; 
            delete temp;                   
        }
		return head;
	}
};
