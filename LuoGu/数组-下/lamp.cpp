/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-08-25 13:50:41
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-08-25 14:03:17
 * @FilePath: \LuoGu\lamp.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  double a[5000];
  int t[5000];
  bool flag[2000000] = {false};
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> t[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= t[i]; j++) {
      flag[(int)(a[i] * j)] = !flag[(int)(a[i] * j)];
    }
  }
  for (int i = 0; i < 2000000; i++) {
    if (flag[i]) {
      cout << i;
      return 0;
    }
  }
  return 0;
}