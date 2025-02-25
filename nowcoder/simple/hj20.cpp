/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-18 17:36:56
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-18 17:38:41
 * @FilePath: \code practice\nowcoder\hj20.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  string st;
  while (getline(cin, st)) {
    // 长度
    if (st.length() <= 8) {
      cout << "NG" << '\n';
      continue;
    }
    // 字符类型
    bool flagUp = false, flagDown = false, flagNum = false, flagOther = false;
    for (auto e : st) {
      if (e >= 'A' && e <= 'Z') {
        flagUp = true;
      } else if (e >= 'a' && e <= 'z') {
        flagDown = true;
      } else if (e >= '0' && e <= '9') {
        flagOther = true;
      } else {
        flagOther = true;
      }
    }
    if (!(flagUp && flagDown && flagNum && flagOther)) {
      cout << "NG" << '\n';
      continue;
    }
    // 重复字符 
    //HARD
    short int ch[256] = {0};
    for (int i = 0; i < st.length(); i++) {
      if (i == 0) {
        ch[st[i]]++;
        continue;
      }
      if (st[i] == st[i - 1]) {
        ch[st[i]]++;
      } else {
        ch[st[i]] = 1;
      }

      if (ch[st[i]] > 2) {
        cout << "NG" << '\n';
        continue;
      }
    }
    // 全无
    cout << "Ok" << '\n';
  }

  return 0;
}