#include <iostream>
using namespace std;

int main(){
  int arr[5] = {6,5,47,2,9};
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int i = 0; i<n; i++){
    int temp = arr[i];
    int j = i-1;
    // for(;j >=0; j--){
      
    //   if(arr[j] > temp){
    //     arr[j+1] = arr[j]; 
    //   }
    //   else{
    //     break;;
    //   }
    // }

    while(arr[j] > temp && j >= 0){
    arr[j+1] = arr[j];
    j--;
    }
    arr[j+1] = temp;
  }

  for(int i = 0; i<5; i++){
    cout << arr[i] << " ";
  }

}