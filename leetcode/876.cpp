/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    int getLength(ListNode* head){
        int len = 0;
        while(head != NULL){
            len++;
            head = head -> next;
        }
        return len;

    }

    ListNode* middleNode(ListNode* head) {
        

        int len = getLength(head);//to calculate len of nodes
        int ans = len/2;//for mid value

        ListNode* temp = head;
        int cnt = 0;//count the number
        while(cnt < ans){//loop cnt should be small then ans
            temp = temp -> next;
            cnt++;
        }
        return temp;
    }
};