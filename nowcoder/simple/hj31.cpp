/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-19 10:47:12
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-20 13:25:44
 * @FilePath: \code practice\nowcoder\hj31.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  char ch;
  string st = "", res = "";
  cin>>noskipws;//cin不跳过空格
  while (cin >> ch) {
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
      st += ch;
    } else if(!st.empty()){
      res = st + ' ' + res;
      st ="";
    }
  }
  cout<<res;
  return 0;
}