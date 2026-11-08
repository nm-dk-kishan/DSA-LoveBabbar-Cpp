/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* pairwiseSwap(Node* head) {
        // The task is to complete this method
        
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        
        Node* temp = head->next;
        head->next = pairwiseSwap(head->next->next);
        temp->next = head;
        
        return temp;
    }
};