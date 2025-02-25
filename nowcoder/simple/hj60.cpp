/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-31 08:13:02
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-31 08:22:39
 * @FilePath: \code practice\nowcoder\simple\hj60.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  for (int i = n / 2; i < n - 1; i++) {
    if (isPrime(i) && isPrime(n - i)) {
      cout << n - i << '\n' << i << '\n';
      break;
    }
  }
  return 0;
}