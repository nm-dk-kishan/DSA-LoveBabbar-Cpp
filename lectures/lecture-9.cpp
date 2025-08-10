#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  int size;
  cout << "Enter the size:";
  cin >> size;

  int all_elem[size];

  cout << "Enter the values: ";
  for(int i = 0; i < size; i++) {
      cin >> all_elem[i];
  }

  
  cout << "Sum Of Array elements: ";
  for(int i = 0; i < size; i++) {
      sum = sum + all_elem[i];
  }
  cout << sum;
}