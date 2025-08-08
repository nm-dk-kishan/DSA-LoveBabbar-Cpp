#include <iostream>
#include <math.h>
using namespace std;

int main(){
  //1. binary to decimal conversion
  // int n;
  // cout << "Enter a number: ";
  // cin >> n;

  // int i = 0;
  // int ans = 0;    


  // while(n != 0){
  //   int last_bit = n & 1;

  //   ans = ans + (last_bit * pow(10,i));
  //   n = n >> 1;
  //   i++;

  // }
  // cout << ans;

  //2.-ve to binary conversion
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int p;
  int ans;

  for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        cout << bit;
  }
  
  cout << endl;

}