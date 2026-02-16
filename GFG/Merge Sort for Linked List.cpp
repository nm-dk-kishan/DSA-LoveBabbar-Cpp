/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* findmid(Node* head){
        Node* slow = head ;
        Node* fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    Node* merge(Node* left , Node* right){
        if(left == NULL) return right;
        if(right == NULL) return left;
        
        Node* ans = new Node(-1);
        Node* temp = ans;
        
        while(left != NULL && right != NULL){
            if(left -> data < right -> data){
                temp -> next = left;
                temp = left;
                left = left -> next;
            }
            else{
                temp -> next = right;
                temp = right;
                right = right -> next;
            }
        }
        
        while(left != NULL){
            temp -> next = left;
            temp = left;
            left = left -> next;            
        }
        
        while(right != NULL){
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
        
        ans = ans -> next;
        return ans;
    }
    
    Node* mergeSort(Node* head) {
        // code here
        
        //base case
        if(head == NULL || head -> next == NULL) return head;
        
        //break LL into 2 halves after finding mid
        Node* mid = findmid(head);
        Node* left = head;
        Node* right = mid -> next;
        mid-> next = NULL;
        
        //recursive call to sort both halves
        left = mergeSort(left);
        right = mergeSort(right);
        
        //merge both halves
        Node* result = merge(left,right);
        return result;
    }
};