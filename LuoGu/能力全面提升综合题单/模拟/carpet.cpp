/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-10-01 23:56:05
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-10-04 21:09:24
 * @FilePath: \LuoGu\carpet.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */

#include <bits/stdc++.h>

using namespace std;
const int MaxN = 10000 + 1;

int main() {
  int n;
  cin >> n;
  int a[MaxN], b[MaxN], g[MaxN], k[MaxN];
  for (int m = 1; m <= n; m++) {
    cin >> a[m] >> b[m] >> g[m] >> k[m];
  }
  int x, y;
  cin >> x >> y;
  for (int m = n; m >= 1; m--) {
    if(a[m]<=x && a[m]+g[m]>=x && b[m]<=y && b[m]+k[m]>=y){
      cout<<m<<'\n';
      return 0;
    }
  }
  cout<<-1<<'\n';
  return 0;
}