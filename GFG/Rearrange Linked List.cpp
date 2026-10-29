/* Node Structure
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        // code here
        
        
        Node *even = head->next;
        Node *odd = head;
        Node *start = even;
        
        while(even!=NULL && even->next!=NULL){
            
            odd->next = even->next;
            even->next = even->next->next;
            
            odd = odd->next;
            even = even->next;
        }
        odd ->next = start;
        
        
    }
};