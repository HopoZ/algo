/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-10-21 16:15:19
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-02-10 20:05:12
 * @FilePath: \LuoGu\TimeComplexity.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int L;
    cin >> L;
    string str;
    getline(cin, str);
    int complexity;
    if (str[2] == '1')
      complexity = 0;
    else if (str[5] <= '9' && str[5] >= '0') {
            complexity =(str[5]-'0')+(str[4]-'0'*10;
    } else {
            complexity = str[4] - '0';
    }
    stack<char> st;
    list<char> setChar;
    int complexityNow =0;
    while (L--) {
            getline(cin, str);
            if (str[0] == 'E') {
              if (st.empty()) {
                cout << "ERR" << '\n';
                break;
              }
              setChar.pop_front();
              st.pop();
              continue;
            }
            int i = 0;
            if (str[i] == 'F') {
              st.emplace('F');
              i += 2;
              if(setChar.find(str[i])){
                cout << "ERR" << '\n';
                break;
              }
              setChar.push_front(str[i]);
              if(str[i+2]=='n' && str[i+4]=='n') 
            }
    }
  }
  return 0;
}