/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-04 15:50:51
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-09-04 15:55:22
 * @FilePath: \code-practice\leetcode\946.验证栈序列.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=946 lang=cpp
 *
 * [946] 验证栈序列
 */

#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
  bool validateStackSequences(vector<int> &pushed, vector<int> &popped) {
    stack<int> s;
    int j = 0;
    for (int i = 0; i < pushed.size(); ++i) {
      s.push(pushed[i]);

      while (!s.empty() && s.top() == popped[j]) {
        s.pop();
        ++j;
      }

    }
    if (j == popped.size()) {
      return true;
    } else {
      return false;
    }
  }
};
