/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-04-13 19:29:00
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-04-13 20:20:58
 * @FilePath: \code practice\nowcoder\simple\MT.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, num;
  vector<int> a;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num < 0)
      num = -num;
    a.push_back(num);
  }
  // 排序
  for (int i = 0; i < n; i++) {
    int min = i;
    for (int j = i; j < n; j++) {
      if (a[j] < a[min])
        min = j;
    }
    swap(a[i], a[min]);
  }

  int res = 0;
  for (int i = 0; i < n; i++) {
    if ((k = k - a[i]) >= 0)
      res++;
    else
      break;
  }
  cout << res;
  return 0;
}