#include <iostream>
using namespace std;

int main(){
  //1.swap alternates
  int n;
  cout << "Enter the size: ";
  cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    cin >> arr[i];
  }

  for(int i = 0; i<n; i++){
    if(i+1 < n){
      swap(arr[i], arr[i+1]);
    }
    i = i + 2;
  }
  for(int i = 0; i<n;i++){
    cout << arr[i];
  }
  
}