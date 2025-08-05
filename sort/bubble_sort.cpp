#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
  for(int i = 0; i < n-1; i++){
    bool sorted = false;
    for(int j = i-1; j < n-i-1; j++){
      if(arr[j+1]<arr[j]){
        swap(arr[j], arr[j+1]);
        sorted = true;
      }
    }

    if(sorted == false){
      break;
    }
  }
}

int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements: ";
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  bubble_sort(arr, n);

  cout << "Sorted array: ";
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}