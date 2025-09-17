#include <iostream>
using namespace std;

int poweer(int a, int b){
  if(b == 0)
    return 1;
  if(b == 1) return a;

  int ans = poweer(a,b/2);

  if(b%2 == 0) return ans*ans;
  else{
    return a*ans*ans;
  }
}

int BubbleSort(int *arr,int n){

  if(n==0||n==1) return 0;
  for(int i = 0;i<n-1;i++){
  if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
  }
  BubbleSort(arr,n-1);
}}

int SelectionSort(int *arr, int n){
  if(n==0||n==1) return 0;
  int maxindex = 0;
  for(int i =0; i<n;i++){
    if(arr[i]>arr[maxindex]){
      maxindex = i;
    }
  }
  swap(arr[maxindex],arr[n-1]);
  SelectionSort(arr,n-1);
}

int InsertionSort(int *arr, int n){
  if(n==0||n==1) return 0;
  int j = n-2;
  int Last = arr[n-1];

  while(j>=0 && arr[j]>Last){
    arr[j+1] = arr[j];
    j--;
  }
  arr[j+1] = Last;
  InsertionSort(arr,n-1);
}

int main(){
  // int a,b;
  // cin >> a >> b;
  // cout << endl;

  // int pow = poweer(a, b);
  // cout << pow;

  // int arr[5] = {4,2,1,3,5};
  // BubbleSort(arr,5);

  // for(int i =0;i<5;i++){
  //   cout << arr[i] << " ";
  // }

  // int arr[6] = {4,2,1,1,3,5};
  // SelectionSort(arr,6);
  // for(int i =0;i<6;i++){
  //   cout << arr[i] << " ";
  // }

  int arr[6] = {4,2,1,1,3,5};
  SelectionSort(arr,6);
  for(int i =0;i<6;i++){
    cout << arr[i] << " ";
  }

  return 0;
}