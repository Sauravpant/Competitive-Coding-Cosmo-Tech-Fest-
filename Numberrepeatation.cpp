/*Problem Stataement:
Given an integer array nums return the number that appears atleast n/2 times where n is the size of array.
*/
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
  int maxNum = 0, maxCount = 0;
  vector<int> nums = {3, 3, 2, 2, 1, 1, 2, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3};
  int n = nums.size();
  unordered_map<int, int> hash;
  for (int val : nums)
  {
    hash[val]++;
  }
  for (auto it : hash)
  {
    if (it.second > maxCount)
    {
      maxCount = it.second;
      maxNum = it.first;
    }
  }
  cout << "The number with max repetition is: " << maxNum << endl;
  return 0;
}
