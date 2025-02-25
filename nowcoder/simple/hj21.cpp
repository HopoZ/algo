/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-18 18:09:46
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-19 10:18:42
 * @FilePath: \code practice\nowcoder\hj21.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  string st;
  cin >> st;
  for (int i = 0; i < st.length(); i++) {

    if (st[i] >= 'a' && st[i] <= 'c') {
      st[i] = '2';
    } else if (st[i] >= 'd' && st[i] <= 'f') {
      st[i] = '3';
    } else if (st[i] >= 'g' && st[i] <= 'i') {
      st[i] = '4';
    } else if (st[i] >= 'j' && st[i] <= 'l') {
      st[i] = '5';
    } else if (st[i] >= 'm' && st[i] <= 'o') {
      st[i] = '6';
    } else if (st[i] >= 'p' && st[i] <= 's') {
      st[i] = '7';
    } else if (st[i] >= 't' && st[i] <= 'v') {
      st[i] = '8';
    } else if (st[i] >= 'w' && st[i] <= 'z') {
      st[i] = '9';
    } else if (st[i] >= 'A' && st[i] <= 'Y') {
      st[i] = st[i]  - 'A' +'a' + 1;
    } else if (st[i] == 'Z') {
      st[i] = 'a';
    }

  }
  cout<<st;
  return 0;
}