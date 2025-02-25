/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-19 09:37:47
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-19 09:46:01
 * @FilePath: \code practice\nowcoder\hj22.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  while (cin >> n) {
    if (n == 0)
      break;
      int drink =0;
    while (n >= 3) {
      drink += n / 3;
      n = n - n / 3 * 3 + n / 3;
    }
    if(n==2) drink++;
    cout<<drink<<'\n';
  }
  return 0;
}