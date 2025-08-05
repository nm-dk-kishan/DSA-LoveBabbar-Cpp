#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter the value of a: ";
  cin >> a;

  int b;
  cout << "Enter the value of b: ";
  cin >> b;

  char ch;
  cout << "Enter the operations to perform: ";
  cin >> ch;

  cout << "Your answer is :";
  switch (ch)
  {
  case '+':
    cout << a + b;
    break;

  case '-':
    cout << a - b;
    break;

  case '*':
    cout << a * b;
    break;

  case '/':
    cout << a / b;
    break;

  case '%':
    cout << a % b;
    break;

  default:
    "Invalid operation";
  }
}