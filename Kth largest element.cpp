/*
Problem Statement:
Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element. 
*/

#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
  int k = 3; // Kth largest number
  vector<int> nums = {3, 2, 1, 5, 6, 4};
  priority_queue<int, vector<int>, greater<int>> minHeap;
  for (int num : nums)
  {
    minHeap.push(num);
    if (minHeap.size() > k)
    {
      minHeap.pop();
    }
  }
  cout << "The kth largest element is " << minHeap.top();

  return 0;
}