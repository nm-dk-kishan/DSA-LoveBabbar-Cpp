#include <iostream>
using namespace std;

// void AP(int n){
//   cout << ((3*n)+7);
// }

// void SetBit(int n,int m){
//   int count = 0;

//   for (int i = 31; i >= 0; i--) {
//     int bit1 = (n >> i) & 1;
//     if(bit1 == 1){
//       count ++;
//     }
//   }

//   for (int i = 31; i >= 0; i--) {
//     int bit2 = (m >> i) & 1;
//     if(bit2 == 1){
//       count ++;
//     }
//   }

//   cout << count;
// }

int update(int a){
  int ans = ans * a;
  return ans;
}

int main(){
  // int n,m; 
  // cout << "Enter the Total amount: ";
  // cin >> n;
  // int option = 1;

  // switch(option){
  //   case 1:
  //     m = n/100;
  //     if(n > 0){
  //     cout << "Rs100 will be " << m <<endl;
  //     }
  //     n = n - (m * 100);

  //   case 2:
  //     m = n/20;
  //     if(n > 0){
  //     cout << "Rs20 will be " << m<<endl;
  //     }
  //     n = n - (m * 20);

  //   case 3:
  //     m = n/1;
  //     if(n > 0){
  //     cout << "Rs1 will be " << m <<endl;
  //   }
  //     n = n - (m * 1);

  // }

  //AP.
  // int n,m;
  // cout << "Enter the value: ";
  // cin >> n;

  // AP(n);

  //setbit
  // int n,m;
  // cout << "Enter the value: ";
  // cin >> n;
  // cout << "Enter the value: ";
  // cin >> m;
  // SetBit(n,m);

  int a = 14;
  a = update(a);
  cout << a;
}