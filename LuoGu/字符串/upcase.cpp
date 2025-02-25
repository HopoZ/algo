/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-23 16:52:34
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-23 16:54:54
 * @FilePath: \LuoGu\upcase.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
//   cout << (int)'A' << ' ' << (int)'Z';
  string lowCase;
  string lowCase_changed = "";
  cin >> lowCase;
  for(auto e : lowCase) {
    if (e >= 'a' && e <= 'z') {
      e = e + 'A' - 'a';
    }
    lowCase_changed += e;
  }
  cout<<lowCase_changed;
  return 0;
}