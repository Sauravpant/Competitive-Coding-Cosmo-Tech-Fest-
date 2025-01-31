/* Problem statement:

You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.
*/
#include <bits/stdc++.h>
using namespace std;
int stock(int index, int buy, int n, vector<int> &prices, vector<vector<int>> &dp)
{
  if (index == n)
    return 0;
  int profit = 0;
  if (dp[index][buy] != -1)
    return dp[index][buy];
  if (buy)
  {
    profit = max(-prices[index] + stock(index + 1, 0, n, prices, dp), stock(index + 1, 1, n, prices, dp));
  }
  else
    profit = max(prices[index] + stock(index + 1, 1, n, prices, dp), stock(index + 1, 0, n, prices, dp));
  return dp[index][buy] = profit;
}
int main()
{
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  int n = prices.size();
  vector<vector<int>> dp(n, vector<int>(2, -1));
  cout << stock(0, 1, n, prices, dp);
  return 0;
}