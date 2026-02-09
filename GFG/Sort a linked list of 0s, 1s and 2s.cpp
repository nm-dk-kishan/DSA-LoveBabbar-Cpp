/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* zeroHead = new Node(-1);
        Node* zeroTail = zeroHead;
        Node* oneHead = new Node(-1);
        Node* oneTail = oneHead;
        Node* twoHead = new Node(-1);
        Node* twoTail = twoHead;
        
        Node* curr = head;
        while(curr != NULL){
            
            if(curr -> data == 0) {
                zeroTail -> next = curr;
                zeroTail = curr;
            }
            else if(curr -> data == 1){
                oneTail -> next = curr;
                oneTail = curr;
            }
            else if(curr -> data == 2) {
                twoTail -> next = curr;
                twoTail = curr;
            }
            curr = curr -> next;
        }
        
        if(oneHead -> next != NULL){
            zeroTail -> next = oneHead -> next;
        }
        else{
            zeroTail -> next = twoHead -> next;
        }
        
        oneTail -> next = twoHead -> next;
        twoTail -> next = NULL;
        
        head = zeroHead -> next;
        
        delete zeroHead;
        delete oneHead;
        delete twoHead;
        
        
        return head;
        
    }
};
