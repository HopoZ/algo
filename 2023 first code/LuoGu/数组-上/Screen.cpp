/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-08-17 21:05:23
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-08-17 21:52:51
 * @FilePath: \LuoGu\Screen.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
  string AsRow[10][5] = {
      "XXX", "X.X", "X.X", "X.X",
      "XXX",  // 0
      "..X", "..X", "..X", "..X",
      "..X",  // 1
      "XXX", "..X", "XXX", "X..",
      "XXX",  // 2
      "XXX", "..X", "XXX", "..X",
      "XXX",  // 3
      "X.X", "X.X", "XXX", "..X",
      "..X",  // 4
      "XXX", "X..", "XXX", "..X",
      "XXX",  // 5
      "XXX", "X..", "XXX", "X.X",
      "XXX",  // 6
      "XXX", "..X", "..X", "..X",
      "..X",  // 7
      "XXX", "X.X", "XXX", "X.X",
      "XXX",  // 8
      "XXX", "X.X", "XXX", "..X",
      "XXX",  // 9

  };
  string ans[5];
  int n;
  cin >> n;
  string num;
  cin >> num;
//   int test =num;
  int nums[100];
  int k = n - 1;  // 避免污染n
  do {
    nums[k--] = num.back()-'0';
     num.erase(num.size() - 1);
  } while (k >= 0);
  for (int i = 0; i < n - 1; i++) {
    ans[0] += AsRow[nums[i]][0] + '.';
    ans[1] += AsRow[nums[i]][1] + '.';
    ans[2] += AsRow[nums[i]][2] + '.';
    ans[3] += AsRow[nums[i]][3] + '.';
    ans[4] += AsRow[nums[i]][4] + '.';
  }
  ans[0] += AsRow[nums[n-1]][0];
  ans[1] += AsRow[nums[n-1]][1];
  ans[2] += AsRow[nums[n-1]][2];
  ans[3] += AsRow[nums[n-1]][3];
  ans[4] += AsRow[nums[n-1]][4];
  for (int i = 0; i < 5; i++) {
    cout << ans[i] << '\n';
  }
}