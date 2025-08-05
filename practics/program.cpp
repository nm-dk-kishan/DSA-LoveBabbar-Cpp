#include <iostream>
#include <math.h>
using namespace std;

int main()
{

  // int arr[5];
  // fill_n(arr, 5, 7); // Array ke sab elements 7 se fill

  // for (int i = 0; i < 5; i++)
  //   cout << arr[i] << " ";

  // infinte loop using while which switch inside

  // int num;
  // cout << "Enter the num(1 or 2): " << endl;
  // cin >> num;

  // while ((num))
  // {
  //   switch (num)
  //   {
  //   case 1:
  //     cout << "HELLO" << endl;
  //     continue;

  //   case 2:
  //     cout << "BYE" << endl;
  //     exit(0);
  //     continue;

  //   default:
  //     cout << "HI|BYE";
  //   }
  //   cout << "case 1 not print";
  // }

  // 6. binary to decimal no.

  // int n;
  // cin >> n;

  // int ans = 0, i = 0;
  // while (n != 0)
  // {
  //   int digit = n % 10;
  //   if (digit == 1)
  //   {
  //     ans = ans + pow(2, i);
  //   }
  //   n = n / 10;
  //   i++;
  // }
  // cout << ans << endl;

  //  5. post and pre increment and decrement

  // for (int i = 0; i < 5; i++)
  // {
  //   for (int j = i; j <= 5; j++)
  //   {
  //     if (i + j == 10)
  //     {
  //       break;
  //     }
  //     cout << i << " " << j << endl;
  //   }
  // }
  // OR

  // for (int i = 0; i <= 15; i += 2)
  // {
  //   cout << i << ' ';
  //   if (i & 1)
  //   {
  //     continue;
  //   }
  //   i++;
  // }
  // OR

  // int a = 1;
  // int b = a++; // b=1 a=2
  // int c = --a; // c =1
  // cout << b;
  // cout << c;

  // OR

  // int num = 3;
  // cout << (25 * (++num));

  // OR

  // int a = 1;
  // int b = 2;

  // if (a-- > 0 || ++b > 2)
  // {
  //   cout << "stage - Inside if";
  // }
  // else
  // {
  //   cout << "stage - Inside else";
  // }
  // cout << a << ' ' << b << endl;

  // OR

  // int a = 1;
  // int b = 2;

  // if (a-- > 0 && ++b > 2)
  // {
  //   cout << "stage - Inside if";
  // }
  // else
  // {
  //   cout << "stage - Inside else";
  // }
  // cout << a << ' ' << b << endl;

  // 4. to create patterns of numbers

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;
  //   while (col <= n - row + 1)
  //   {
  //     cout << col;
  //     col++;
  //   }

  //   int x = 1;
  //   int star = 1;
  //   while (star < row)
  //   {
  //     cout << "**";
  //     star++;
  //   }

  //   int num = n;
  //   while (num >= row)
  //   {
  //     cout << num - row + 1;
  //     num--;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;
  //   while (col <= n - row + 1)
  //   {
  //     cout << col;
  //     col++;
  //   }

  //   int x = 1;
  //   int star = 1;
  //   while (star < row)
  //   {
  //     cout << "**";
  //     star++;
  //   }

  //   int num = n;
  //   while (num >= row)
  //   {
  //     cout << num - row + 1;
  //     num--;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // int val = 1;
  // while (row <= n)
  // {
  //   int space = n - row;
  //   while (space)
  //   {
  //     cout << " ";
  //     space--;
  //   }
  //   int col = 1;
  //   while (col <= row)
  //   {
  //     cout << col;
  //     col++;
  //   }
  //   int num = 1;
  //   while (num < row)
  //   {
  //     cout << num;
  //     num++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // int val = 1;
  // while (row <= n)
  // {
  //   int space = n - row;
  //   while (space)
  //   {
  //     cout << " ";
  //     space--;
  //   }
  //   int col = 1;
  //   while (col <= row)
  //   {
  //     cout << val;
  //     col++;
  //     val++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;

  // while (row <= n)
  // {
  //   int space = row - 1;
  //   while (space)
  //   {
  //     cout << " ";
  //     space--;
  //   }
  //   int col = 1;
  //   while (col <= n - row + 1)
  //   {
  //     cout << col + row - 1;
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int space = n - row;
  //   while (space)
  //   {
  //     cout << " ";
  //     space--;
  //   }
  //   int col = 1;
  //   int val = 1;
  //   while (col <= row)
  //   {
  //     cout << val;
  //     val++;
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int space = n - row;
  //   while (space)
  //   {
  //     cout << " ";
  //     space--;
  //   }
  //   int col = 1;
  //   while (col <= row)
  //   {
  //     cout << row;
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int space = n - row;
  //   while (space)
  //   {
  //     cout << " ";
  //     space--;
  //   }
  //   int col = 1;
  //   while (col <= row)
  //   {
  //     cout << row;
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int space = row - 1;
  //   while (space)
  //   {
  //     cout << " ";
  //     space--;
  //   }
  //   int col = 1;
  //   while (col <= n - row + 1)
  //   {
  //     cout << row;
  //     col++;
  //   }
  // cout << endl;
  // row++;

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int space = row - 1;
  //   while (space)
  //   {
  //     cout << " ";
  //     space--;
  //   }

  //   int col = 1;
  //   while (col <= n - row + 1)
  //   {
  //     cout << '*';
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;
  //   while (col <= n - row + 1)
  //   {
  //     cout << '*';
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int space = n - row;
  //   while (space)
  //   {
  //     cout << " ";
  //     space--;
  //   }

  //   int col = 1;
  //   while (col <= row)
  //   {
  //     cout << '*';
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;
  //   char value = 'A' + row + col - 2;
  //   while (col <= n)
  //   {
  //     cout << value;
  //     value++;
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;
  //   char value = 'A' + row + col - 2;
  //   while (col <= row)
  //   {
  //     cout << value;
  //     value++;
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // char value = 'A' - 1;

  // while (row <= n)
  // {
  //   int col = 1;
  //   while (col <= row)
  //   {
  //     value++;
  //     cout << value;
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;

  // while (row <= n)
  // {
  //   int col = 1;
  //   char value = 'A' + row + col - 2;
  //   while (col <= n)
  //   {
  //     cout << value;
  //     col++;
  //     value++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // char count = 'A';
  // while (row <= n)
  // {
  //   int col = 1;
  //   while (col <= n)
  //   {
  //     cout << count;
  //     col++;
  //     count++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;

  //   while (col <= n)
  //   {
  //     char ch = 'A' + col - 1;
  //     cout << ch << " ";
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;

  //   while (col <= n)
  //   {
  //     char ch = 'A' + row - 1;
  //     cout << ch << " ";
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;

  //   while (col <= row)
  //   {
  //     cout << row - col + 1 << " ";
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;
  //   int val = row;
  //   while (col <= row)
  //   {
  //     cout << val << " ";
  //     col++;
  //     val--;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;

  //   while (col <= row)
  //   {
  //     cout << row + col - 1 << " ";
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }
  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;
  //   int count = row;
  //   while (col <= row)
  //   {
  //     cout << row << " ";
  //     col++;
  //     count++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;
  //   while (col <= row)
  //   {
  //     cout << row << " ";
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int row = 1;
  // while (row <= n)
  // {

  //   int col = 1;
  //   while (col <= row)
  //   {
  //     cout << "*" << " ";
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  // OR

  //  int n;
  //  cin >> n;

  // int i = 1;

  // while (i <= n)
  // {

  //   int j = 1;
  //   while (j <= n)
  //   {
  //     cout << j;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // OR

  // int n;
  // cin >> n;

  // int i = 1;

  // while (i <= n)
  // {

  //   int j = 1;
  //   while (j <= n)
  //   {
  //     cout << n - j + 1;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // OR

  // int n;
  // cin >> n;

  // int i = 1;
  // while (i <= n)
  // {
  //   int j = 1;
  //   while (j <= 3)
  //   {
  //     cout << i;
  //     j++;
  //     i++;
  //   }
  //   cout << endl;
  // }

  // OR

  // int n;
  // cin >> n;

  // int i = 1;
  // int count = 1;
  // while (i <= n)
  // {

  //   int j = 1;
  //   while (j <= n)
  //   {
  //     cout << count << " ";
  //     count++;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // 3.to calculate the Celsius and Fahrenheit

  // int choice;
  // cout << "Enter 1 for Celsius to Fahrenheit or 2 for Fahrenheit to Celsius: " << endl;
  // cin >> choice;

  // if (choice == 1)
  // {
  //   float celsius;
  //   cout << "Enter temperature in celsius: " << endl;
  //   cin >> celsius;

  //   float Fahrenheit = (celsius * 9 / 5) + 32;
  //   cout << "Temperature in Fahrenheit: " << Fahrenheit << endl;
  // }
  // else if (choice == 2)
  // {
  //   float Fahrenheit;
  //   cout << "Enter temperature in Fahrenheit: " << endl;
  //   cin >> Fahrenheit;
  //   float celsius = (Fahrenheit - 32) * (5 / 9);
  // }
  // else
  // {
  //   cout << "Invalid choice" << endl;
  // }

  // 2. to find the sun of 1 to n even  numbers

  // int n;
  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  // int sum = 0;
  // int i = 2;

  // while (i <= n)
  // {
  //   sum += i;
  //   i += 2;
  // }

  // cout << "the sun of 1 to n even  numbers: " << sum << endl;

  // 1. to check whether the character is lower case, upper case or numeric

  // char ch;
  // cout << "Enter the value : " << endl;
  // cin >> ch;

  // if (ch >= 'a' && ch <= 'z')
  // {
  //   cout << "This is lower case" << endl;
  // }
  // else if (ch >= 'A' && ch <= 'Z')
  // {
  //   cout << "This is Upper case" << endl;
  // }
  // else if (ch >= '0' && ch <= '9')
  // {
  //   cout << "This is numeric" << endl;
  // }
  // else
  // {
  //   cout << "no" << endl;
  // }
  // cout << ch;
  // return 0;
}