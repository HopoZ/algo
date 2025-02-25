#include "leetcode-definition.h"
/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

using namespace std;

class Solution {
public:
  double myPow(double x, int n) {
    if (x == 0) {
      return 0.00;
    }
    if (n == 0)
      return 1.00;
    long ln = n; // 防转负号溢出
    if (ln < 0) {
      ln = -ln;
      x = 1 / x;
    }
    if (x < 0) {
      x = -x;
      if (n % 2 == 0) {
        return dfs(x, ln);
      }
      return -dfs(x, ln);
    }
    return dfs(x, ln);
  }

  double dfs(double num, long n) {
    if (n == 1)
      return num;
    double sqrtNumN = dfs(num, n / 2);
    if (n % 2 == 0) {
      return sqrtNumN * sqrtNumN;
    } else {
      return sqrtNumN * sqrtNumN * num;
    }
  }
};
