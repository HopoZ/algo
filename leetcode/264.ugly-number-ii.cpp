/*
 * @lc app=leetcode id=264 lang=cpp
 *
 * [264] Ugly Number II
 */
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
  int nthUglyNumber(int n) {
    vector<int> DP(n);
    DP[0]=1;
    int x = 0, y = 0, z = 0;
    for (int i = 1; i < n; ++i) {
      DP[i] = min(DP[x] * 2, min(DP[y] * 3, DP[z] * 5));
      // 不重复性：每个现有丑数都可以*2*3*5三个选择往后延拓丑数，且都只进行一次不会有重复的出现
      //完全覆盖性：意会
      if (DP[i] == DP[x] * 2) {
        x++;
      }
      if (DP[i] == DP[y] * 3) {
        y++;
      }
      if (DP[i] == DP[z] * 5) {
        z++;
      }
    }
    return DP[n - 1];
  }
};
