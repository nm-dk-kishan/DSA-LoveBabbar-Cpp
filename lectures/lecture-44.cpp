#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  //consturtor
  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }

  //destoructor
  ~Node() {
  cout << "Memory is free for node with data " << data << endl;
  };


};

void insertAtHead(Node* &head, int d){

  //new node create
  Node* temp = new Node(d);
  temp -> next = head;
  head = temp;
};

void insertAtTail(Node* &tail,int d){
  Node* temp = new Node(d);
  tail -> next = temp;
  tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head, int position, int d){

  if(position == 1){
    insertAtHead(head,d);
    return;
  }

  Node* temp = head;
  int cnt = 1;
  while(cnt < position-1){
    temp = temp -> next;
    cnt++;
  }

  if(temp -> next == NULL){
    insertAtTail(tail,d);
    return;
  }

  Node* nodeToInsert = new Node(d);
  nodeToInsert -> next = temp -> next;
  temp -> next = nodeToInsert;
}

void deleteNode(int position,Node* &head){

  //deleting first or start node
  if(position == 1){
    Node* temp = head;
    head = head -> next;
    //memory free start node
    temp -> next = NULL;
    delete temp;
  }
  else{
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < position){
      prev = curr;
      curr = curr -> next;
      cnt++;
    }

    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;

  }
  

}

void print(Node* &head){
  Node* temp = head;

  while(temp != NULL) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;
}

  

int main() {

  Node* node1 = new Node(10);

  Node* head = node1;
  Node* tail = node1;
  print(head);

  insertAtHead(head,12);

  print(head);

  insertAtTail(tail,15);
  print(head);


  insertAtPosition(tail,head,4,22);
  print(head);

  cout << "Head " << head -> data << endl;
  cout << "Tail " << tail -> data << endl;

  deleteNode(3,head);
  print(head);

  return 0;
}