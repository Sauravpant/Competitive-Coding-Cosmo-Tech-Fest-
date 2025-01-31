/* Problem Statement:
Given an integer array arr in the range [1,n+1] return the missing number in the interval
*/
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {3, 7, 1, 2, 8, 4, 5};
  int n = 8;
  int sum = 0;
  for (int i = 0; i < 7; i++)
  {
    sum += arr[i];
  }
  int missingNumber = ((n * (n + 1)) / 2) - sum;
  cout << "Missing number is " << missingNumber << endl;
  return 0;
}
