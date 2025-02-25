/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-18 18:10:38
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-18 18:58:05
 * @FilePath: \LuoGu\3n+1.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  stack<int> storage;
  while(n!=1){
    storage.emplace(n);
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
  } 
  storage.emplace(1);
  while( !storage.empty() ){
    cout<<storage.top()<<' ';
    storage.pop();
  }
}