#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){

  for(int i = 0; i < n-1; i++){
    int min_Index = i;

    for(int j = i+1; j<n; j++){
      if(arr[j] < arr[min_Index]){
        min_Index = j;
      }
    }
      swap(arr[i], arr[min_Index]);
  
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

  selection_sort(arr, n);

  cout << "Sorted array: ";
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}