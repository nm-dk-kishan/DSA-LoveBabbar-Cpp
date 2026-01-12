#include<iostream>
using namespace std;

// class Human {

//   //Implementation details
//   public:
//   int height;
//   int age;
//   int weight;

//   public:
//   int getAge(){
//     return this->age;
//   }

//   void setWeight(int w){
//     this->weight = w;
//   }
// };

// class Male:public Human{

//   public:
//   string color;

//   void sleep() {
//     cout << "Male is sleeping" << endl;
//   }
// };

// Multi-level Inheritance + Multiple Inheritance 

class A{
  public: 
  void funcA(){
    cout << "Inside func A" << endl;
  }
};

class B{
  public: 
  void funcB(){
    cout << "Inside func B" << endl;
  }
};

// class C: public B{
//   public: 
//   void funcC(){
//     cout << "Inside func C" << endl;
//   }
// };

class D: public A,public B {
  public: 
  void funcD(){
    cout << "Inside func D" << endl;
  }
};

int main(){

  // C objC;
  // objC.funcA();

  D objD;
  objD.funcA();
  objD.funcB();

  // Male obj;
  
  // cout << obj.age << endl;
  // cout << obj.height << endl;
  // cout << obj.weight << endl;

  // cout << obj.color << endl;

  // obj.setWeight(38);

  // cout << obj.weight << endl;

  // obj.sleep();

  return 0;
};