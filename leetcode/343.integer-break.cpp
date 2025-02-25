/*
 * @lc app=leetcode id=343 lang=cpp
 *
 * [343] Integer Break
 */

#include <vector>
using namespace std;

class Solution {
public:
  int integerBreak(int n) {
    vector<int> DP(n + 1); // DP[i]表示把i拆成>=2个数的乘积的最大值
    DP[0] = 0, DP[1] = 1, DP[2] = 1;
    for (int i = 3; i <= n; ++i) {
      int nowMax = 0;
      for (int j = 1; j <= i - 1; ++j) {
        nowMax = max(nowMax, max(j * DP[i - j], j * (i - j)));
      }
      DP[i] = nowMax;
    }
    return DP[n];
  }
};
