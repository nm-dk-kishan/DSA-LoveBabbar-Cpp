/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertAtTail(Node* &head,Node* &tail,int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    Node* copyRandomList(Node* head) {
        Node* clonehead = NULL;
        Node* clonetail = NULL;

        Node* temp = head;
        while(temp != NULL){
            insertAtTail(clonehead,clonetail,temp->val);
            temp = temp -> next;
        }

        Node* ognode = head;
        Node* clonenode = clonehead;
        while(ognode != NULL && clonenode != NULL){
            Node* next = ognode -> next;
            ognode -> next = clonenode;
            ognode = next;

            next = clonenode -> next;
            clonenode -> next = ognode;
            clonenode = next;
        }
        
        temp = head;
        while(temp != NULL){
            if(temp -> next != NULL){
                if(temp -> random != NULL){
                    temp -> next -> random = temp -> random -> next;
                }
                else{
                    temp -> next -> random = NULL;
                }
            }
            temp = temp -> next -> next;
        }

        ognode = head;
        clonenode = clonehead;
        while(ognode != NULL && clonenode != NULL){
            ognode -> next = clonenode -> next;
            ognode = ognode -> next;
            if(ognode != NULL){
                clonenode -> next = ognode -> next;
            }
            clonenode = clonenode -> next;

        }
        return clonehead;
    }
};