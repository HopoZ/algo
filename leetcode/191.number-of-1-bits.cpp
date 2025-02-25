/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

using namespace std;

class Solution {
public:
  int hammingWeight(int n) {
    int res = 0;
    while (n) {
      ++res;
      n &= (n - 1); // 会把最低位的1变成0
    }
    return res;
  }
};
