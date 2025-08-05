#include <iostream>
using namespace std;

int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}

int nCr(int num1, int num2)
{
  int num = factorial(num1);
  int denom = factorial(num2) * factorial(num1 - num2);
  return num / denom;
}

int main()
{
  int n1, n2;
  cout << "Enter the num1 & num2: ";
  cin >> n1 >> n2;

  cout << nCr(n1, n2);
}