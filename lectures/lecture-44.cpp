#include<iostream>
using namespace std;

//   //single linked list
// class Node {
//   public:
//   int data;
//   Node* next;

//   //consturtor
//   Node(int data){
//     this -> data = data;
//     this -> next = NULL;
//   }

//   //destoructor
//   ~Node() {
//   cout << "Memory is free for node with data " << data << endl;
//   };


// };

// void insertAtHead(Node* &head, int d){

//   //new node create
//   Node* temp = new Node(d);
//   temp -> next = head;
//   head = temp;
// };

// void insertAtTail(Node* &tail,int d){
//   Node* temp = new Node(d);
//   tail -> next = temp;
//   tail = temp;
// };

// void insertAtPosition(Node* &tail,Node* &head, int position, int d){

//   if(position == 1){
//     insertAtHead(head,d);
//     return;
//   }

//   Node* temp = head;
//   int cnt = 1;
//   while(cnt < position-1){
//     temp = temp -> next;
//     cnt++;
//   }

//   if(temp -> next == NULL){
//     insertAtTail(tail,d);
//     return;
//   }

//   Node* nodeToInsert = new Node(d);
//   nodeToInsert -> next = temp -> next;
//   temp -> next = nodeToInsert;
// };

// void deleteNode(int position,Node* &head){

//   //deleting first or start node
//   if(position == 1){
//     Node* temp = head;
//     head = head -> next;
//     //memory free start node
//     temp -> next = NULL;
//     delete temp;
//   }
//   else{
//     Node* curr = head;
//     Node* prev = NULL;

//     int cnt = 1;
//     while(cnt < position){
//       prev = curr;
//       curr = curr -> next;
//       cnt++;
//     }

//     prev -> next = curr -> next;
//     curr -> next = NULL;
//     delete curr;

//   }
  

// };

//double linked list
class Node {
  public: 
  int data;
  Node* prev;
  Node* next;

  //construtor
  Node(int d) {
    this -> data = d;
    this -> prev = NULL;
    this -> next = NULL;
  }

  //destortuctor
  ~Node() {
    cout << "Memory is free for node with data " << data << endl;
  };
};

//traversing a linked list
void print(Node* head){
  Node* temp = head;

  while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;
};

//length of linked list
int getLength(Node* &head){
  int len = 0;
  Node* temp = head;

  while( temp != NULL){
    len++;
    temp = temp -> next;
  }

  return len;
}

void insertAtHead(Node* &head,int d){

  if(head == NULL){
    Node* temp = new Node(d);
    head = temp;
    return;
  };
   
  Node* temp = new Node(d);
  temp -> next = head;
  head -> prev = temp;
  head = temp;
};

void insertAtTail(Node* &tail, int d){
  if(tail == NULL){
    Node* temp = new Node(d);
    tail = temp;
    return;
  }

  Node* temp = new Node(d);
  tail -> next = temp;
  temp -> prev = tail;
  tail = temp;
};

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
  if(position == 1){
    insertAtHead(head,d);
    return;
  }

  Node* temp = head;
  int count = 1;

  while(count < position-1){
    temp = temp -> next;
    count++;
  }

  if(temp -> next == NULL){
    insertAtTail(tail, d);
    return;
  }

  Node* NodeToInsert = new Node(d);
  NodeToInsert -> next = temp -> next;
  temp -> next ->prev = NodeToInsert;
  temp -> next = NodeToInsert;
  NodeToInsert -> prev = temp;

};

void deleteNode(int position,Node* &head,Node* &tail){
  //delete first Node
  if(position ==  1){
    Node* temp = head;
    
    if(head -> next != NULL){
      head -> next -> prev = NULL;
    }
    else{
      head = tail = NULL;
    }

    temp -> next = NULL;
    delete temp;
    return;
  }


  //delete any middle or last Node
  Node* curr = head;
  Node* prev = NULL;
  int count = 1;

  while(curr != NULL && count < position){
    prev = curr;
    curr = curr -> next;
    count++;
  }

  if(curr == NULL) return;

  prev -> next = curr -> next;

    if (curr->next != NULL) {
        curr->next->prev = prev;
    } else {
        tail = prev;  
    };
  
  curr -> next = NULL;
  curr -> prev = NULL;


  delete curr;

}
  

int main() {

  //->double linked list

  Node* node1 = new Node(10);
  Node* head = node1;
  Node* tail = node1;
  print(head);
  // cout << getLength(head) << endl;

  insertAtHead(head, 11);
  print(head);

  insertAtHead(head, 9);
  print(head);

  insertAtHead(head, 13);
  print(head);

  insertAtTail(tail, 25);
  print(head);

  insertAtPosition(tail, head, 2, 100);
  print(head);

  insertAtPosition(tail, head, 1, 101);
  print(head);

  insertAtPosition(tail, head, 8, 102);
  print(head);


  deleteNode(8, head,tail);
  print(head);

  cout << "Head " << head -> data << endl;
  cout << "Tail " << tail -> data << endl;



  // //->single linked list

  // Node* node1 = new Node(10);

  // Node* head = node1;
  // Node* tail = node1;
  // print(head);

  // insertAtHead(head,12);

  // print(head);

  // insertAtTail(tail,15);
  // print(head);


  // insertAtPosition(tail,head,4,22);
  // print(head);

  // cout << "Head " << head -> data << endl;
  // cout << "Tail " << tail -> data << endl;

  // deleteNode(3,head);
  // print(head);

  return 0;
}