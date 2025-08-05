#include <iostream>
using namespace std;

void fibonacci(int n)
{
  int n1 = 0, n2 = 1;
  cout << n1 << " " << n2;
  for (int i = 2; i < n; i++)
  {
    int t_n = n1 + n2;
    cout << " " << t_n;
    n1 = n2;
    n2 = t_n;
  }
}

int main()
{
  int a;
  cin >> a;
  cout << " answer : ";
  fibonacci(a);
}