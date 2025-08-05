
#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
};

void swap(int arr[], int size)
{
  for (int i = 0; i < size; i += 2)
  {
    if (i + 1 < size)
    {
      swap(arr[i], arr[i + 1]);
    }
  }
};

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
};

int main()
{
  // 1. Find the sum of array

  // int n;
  // int sum = 0;
  // cout << "Enter the size of array: ";
  // cin >> n;
  // int arr[n];

  // cout << "Enter the array: ";
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i];
  // }
  // cout << "Enter arrays number : " << endl;
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << endl;
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   sum = sum + arr[i];
  // }
  // cout << " The sum of all the array is " << sum << endl;

  // 2. To check whether 1 is present or not

  // int n;
  // cout << "Enter the size of array : ";
  // cin >> n;
  // int arr[n];

  // cout << "Enter the array number : ";
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i];
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   if (arr[i] == 1)
  //   {
  //     cout << "Array have 1";
  //     return 0;
  //   }
  // };
  // cout << "Array don't have 1";
  int arr[5] = {1, 2, 4, 5, 6};
  int brr[4] = {2, 3, 4, 3};

  // reverse(arr, 5);
  // reverse(brr, 4);

  swap(arr, 5);
  swap(brr, 4);
  cout << "Array after swapping: " << endl;

  printArray(arr, 5);
  printArray(brr, 4);

  return 0;
}