/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

#include <climits>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int myAtoi(string str) {
    int res = 0;
    bool mns = false;
    int i = 0;
    while (str[i] == ' ')
      ++i;
    if (str[i] == '-') {
      mns = true;
      ++i;
    } else if (str[i] == '+') {
      ++i;
    }

    for (; i < str.length() && str[i] >= '0' && str[i] <= '9'; i++) {
      int digit = str[i] - '0';
      if (res < (INT_MIN + digit) / 10)
        return mns ? INT_MIN : INT_MAX;
      res = res * 10;
      res -= digit;
    }
    if (res == INT_MIN && !mns) {
      return INT_MAX;
    }
    return mns ? res : -res;
  }
};
