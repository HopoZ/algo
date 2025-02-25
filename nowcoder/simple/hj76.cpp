/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-04-06 16:21:32
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-04-06 17:43:14
 * @FilePath: \code practice\nowcoder\simple\hj76.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int min = n * n - n + 1;

  for (int i = 0; i < n - 1; i++) {
    cout << min + 2 * i << '+';
  }
  cout << min + 2 * (n - 1) << '\n';
  return 0;
}