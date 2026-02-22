#include <iostream>
#include <stack>
using namespace std;

class StackArr{

  //properties
  public:
    int* arr;
    int top;
    int size;

  //behaviour
  StackArr(int size){
    this -> size = size;
    arr = new int[size];
    top = -1; 
  }

  void push(int x){
    if( size - top > 1){
      top++;
      arr[top] = x;
    }
    else{
      cout << "Stack overflow" << endl;
    }
  }

  void pop(){
    if(top >= 0){
      top--;
    }
    else{
      cout << "Stack underflow" << endl;
    }
  }

  void peek(){
    if(top >= 0){
      cout << arr[top] << endl;
    }
    else{
      cout << "Stack is empty" << endl;
    }
  }

  bool isEmpty(){
    if(top == -1) return true;
    return false;
  } 


};

class StackLL{
  //properties

  public:
    struct Node{
      int data;
      Node* next;

      Node(int x){
        data = x;
        next = NULL;
      }
    };
  //behaviour

  Node* head;

  StackLL(){
    head = NULL;
  }

  void push(int x){
    Node* temp = new Node(x);
    temp -> next = head;
    head = temp;
  }

  void pop(){
    if(head == NULL){
      cout << "Stack underflow" << endl;
    }
    else{
      Node* temp = head;
      head = head -> next;
      delete temp;
    }
  }

  void peek(){
    if(head == NULL){
      cout << "Stack is empty" << endl;
    }
    else{
      cout << head -> data << endl;
    }
  }

  bool isEmpty(){
    if(head == NULL) return true;
    return false;
  }
};


int main(){

  StackArr st(5);
  // StackLL st;

  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);

  st.peek();

  st.pop();
  st.peek();

  if(st.isEmpty()){
    cout << "Stack is empty" << endl;
  }
  else{
    cout << "Stack is not empty" << endl;
  };
}

