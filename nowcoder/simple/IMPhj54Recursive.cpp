/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-25 10:04:00
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-27 16:31:45
 * @FilePath: \code practice\nowcoder\simple\IMPhj54Recursive.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */

#include <bits/stdc++.h>
// 递归法
using namespace std;

int compute(string s, int left, int right) {
  char op = '+';
  vector<int> st;
  int num = 0;
  for (int i = left; i <= right; i++) {
    if (isdigit(s[i])) {
      num = num * 10 + s[i] - '0';
    }


    if (s[i] == '(') {
      int layer = 0;
      int j = i;
      while (j <= right) {
        if (s[j] == '(') {
          layer++;
        } else if (s[j] == ')') {
          layer--;
          if (layer == 0) {
            break;
          }
        }
        j++;
      }
      num = compute(s, i + 1, j - 1);
      i = j + 1;
    }

    
    if (!isdigit(s[i]) || i == right) {
      switch (op) {
        case '+':
          st.push_back(num);
          break;
        case '-':
          st.push_back(-num);
          break;
        case '*':
          st.back()*= num;
          break;
        case '/':
          st.back()/= num;
          break;
      }
      num =0;
      op =s[i];
    }
  }
  int res = 0;
  for (auto e : st) {
    res += e;
  }
  return res;
}

int main() {
  string s;
  cin >> s;
  cout << compute(s, 0, s.length() - 1) << '\n';
  return 0;
}