#include <iostream>
using namespace std;

int bit(int n)
{
  int b, s = 0;
  while (n != 0)
  {
    b = n & 1;
    s += b;
    n >>= 1;
  }
  return s;
}

int t_bit(int a, int b)
{
  int ans;
  ans = bit(a) + bit(b);
  return ans;
}

int main()
{
  int a, b;
  cin >> a >> b;

  cout << " answer : " << t_bit(a, b);
}