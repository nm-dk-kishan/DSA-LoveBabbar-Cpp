/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    Node* getmid(Node* head){
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head) {
        //  code here
        
        //base code
        if(head == NULL || head -> next == NULL){
            return true;
        }
        
        // step 1
        Node* mid = getmid(head);
        //step 2
        Node* temp = mid -> next;
        mid -> next = reverse(temp);
        
        
        //step 3
        Node* head1 = head;
        Node* head2 = mid -> next;
        
        while(head2 != NULL){
            if(head1 ->data != head2 -> data){
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        
        //step 4
        temp = mid -> next;
        mid -> next = reverse(temp);
        
        return true;
    }
};