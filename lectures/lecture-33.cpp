#include <iostream>
using namespace std;

// int RecursionSum(int arr,int size){
//   int arr[5] = {1,2,3,4,5};
//   if(size == 0) return 0;
//   return arr[size-1] + RecursionSum(arr,size-1);
// }

bool checkpalindrome(string str, int i, int j){
  if(i>j) return true;
  if(str[i] != str[j]) return false;
  else{
    return checkplaindrome(str,i++,j--);
  }
}

int main(){
  string name ="nameeman";
  cout << end;

  bool checkpalindrome(name,0,name.lenght()-1);

  if(ispalindrome){
    cout << "Its is a Palindrome";
  }
  else{
    cout << "Not a palindrome";
  }

  return 0;
}