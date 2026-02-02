
class Solution {
public:
    void  reverse(ListNode* &head,ListNode* curr,ListNode* prev){
        //by recursion
        

        //base case
        if(curr == NULL){
            head = prev;
            return;
        }

        ListNode* forward = curr -> next;
        reverse(head,forward,curr);
        curr -> next = prev;
    }


    ListNode* reverseList(ListNode* head) {

        ListNode* curr = head;

        ListNode* prev = NULL;
        reverse(head,curr,prev);
        return head;


        //OR

    //     if(head == NULL || head -> next == NULL){
    //         return head;
    //     }

    //     ListNode* prev = NULL;
    //     ListNode* curr = head;

    //     while(curr != NULL){
    //         ListNode* forward = curr -> next;
    //         curr -> next = prev;

    //         prev = curr;
    //         curr = forward;
    //     }

    //     return prev;
    }
};