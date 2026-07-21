#include <iostream>
#include <vector>
using namespace std;
void moveNeg(vector<int>& arr){

    int n= arr.size();
    int left=0,right=n-1;

    while(left < right){
        if(arr[left] < 0){
            left++;
        }
        else if(arr[right] >= 0 ){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}


int main() {

    vector<int> arr = { -12, 11, -13, -5, 6, -7, 5, -3, -6};

    moveNeg(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
    return 0;
}
