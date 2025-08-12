#include <iostream>
using namespace std;

int main(){
  //1. Sum of Digits – Given an integer n, find the sum of its digits. (Loop, modulus, division)
  // int n,total_num,digit;
  // int sum = 0;
  // cout << "Enter the number: ";
  // cin >> n;

  // for(int i = 0; i<n;i++)
  // {
  //   digit = n % 10;
  //   sum = sum + digit;
  //   n = n / 10;
  // }
  // cout << sum;
  
  //2. Count Even & Odd Numbers – Input n integers, count how many are even and how many are odd. (Array + loop)
  // int n;
  // cout << "Enter the size of number : ";
  // cin >> n;

  // int even_count = 0;
  // int odd_count = 0;

  // int arr[n];

  // for(int i = 0; i < n; i++){
  //   int a;
  //   cout << "Enter the arr no.: ";
  //   cin >> a;
  //   arr[i] = a;
  // }

  // cout << "array are ";

  // for(int i = 0; i < n; i++){
  //   cout << arr[i];
  // }
  // cout << endl;
  
  // for(int i = 0; i < n; i++){

  //   int mode = arr[i] % 2;

  //   if(mode == 0){
  //     even_count++;
  //   }
  //   else if(mode == 1){
  //     odd_count++;
  //   }
  // }
  // cout << "Even Count : " << even_count << endl;
  // cout << "Odd count : " << odd_count << endl;

  //3. Find Maximum Element in an Array (Simple traversal)
  // int n,p; 
  // cout << "Enter the size of number : ";
  // cin >> n;

  // int arr[n];
  // for(int i = 0; i < n; i++){
  //   int a;
  //   cout << "Enter the arr number : ";
  //   cin >> a;
  //   arr[i] = a;
  // }

  // for(int i = 1; i<=n;i++){
  //   if(arr[0] < arr[i]){
  //     swap(arr[0],arr[i]);
  //     p = arr[i];
  //   }

  // }
  // cout << p;

  //4. Reverse an Array (In-place reversal using two pointers)
  // int n; 
  // cout << "Enter the size of array : ";
  // cin >> n;

  // int arr[n];

  // for(int i = 0; i< n; i++){
  //   int a;
  //   cout << "Enter the array number : ";
  //   cin >> a;
  //   arr[i] = a;
  // }

  // int start = 0;
  // int end = n-1;
  // while(start < end){
  //   swap(arr[start], arr[end]);
  //   start++;
  //   end--;
  // }
  // for(int i = 0; i<n;i++){
  // cout << arr[i];
  // }

  //5. Check Prime Number (Loop optimization, break early)
  // int n,c; 
  // cout << "Enter the number : ";
  // cin >> n;

  // for(int i=2; i<=n-1 ; i++){
  //   c = n%i;
  // if (c == 0){
  //   cout << "not Prime";
  //   break;
  // }
  
  // }
  // if(c != 0){
  //   cout << "prime";
  // }

  //6. Pattern Printing – Right Angled Triangle
        // *
        // **
        // ***
        // ****
  // int n;
  // cout << "Enter the number : ";
  // cin >> n;

  // for(int i =0 ;i<n;i++){
  //   for(int j = 0;j <= i; j++){
  //     cout << "*" ;
  //   }
  //   cout << endl;
  // }

  //7. Convert Binary to Decimal (Manual conversion using powers of 2)
  
}