/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-30 22:25:19
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-30 22:34:43
 * @FilePath: \LuoGu\GoldBach.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>
bool isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 2; i <= n; i = i + 2) {
    for (int j = 2; j < i; j++) {
      if (isPrime(j) && isPrime(i - j)) {
        cout << i << '=' << j << '+' << i - j << '\n';
        break;
      }
    }
  }
  return 0;
}