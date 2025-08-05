#include <iostream>
#include <math.h>
using namespace std;
int ap(int num)
{
  int ap = ((3 * num) + 7);
  return ap;
}

int main()
{
  int n;
  cin >> n;

  cout << ap(n);
}