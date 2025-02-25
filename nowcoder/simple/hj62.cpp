/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-04-03 12:41:27
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-04-03 12:41:35
 * @FilePath: \code practice\nowcoder\simple\hj62.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  while (cin >> n) {
    int bitNum = 0;
    while (n != 0) {
      if (n % 2 == 1) {
        bitNum++;
      }
      n /= 2;
    }
    cout << bitNum<<'\n';
  }
  return 0;
}