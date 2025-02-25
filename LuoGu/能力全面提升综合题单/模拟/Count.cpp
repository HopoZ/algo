/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-10-20 23:08:42
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-10-20 23:31:29
 * @FilePath: \LuoGu\Count.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;
int cntNum(int n) {
  int cnt = 0;
  while (n > 0) {
    if (n % 10 == 2)
      cnt++;
    n /= 10;
  }
  return cnt;

  return cnt;
}

int main() {
  int l, r;
  cin >> l >> r;
  int sum =0;
  for (int i =l;i<=r;i++){
    sum+=cntNum(i);
  }
  cout<<sum<<'\n';
    return 0;
}