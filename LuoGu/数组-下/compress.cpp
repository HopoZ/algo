/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-12 22:10:41
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-14 16:44:15
 * @FilePath: \LuoGu\compress.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include <bits/stdc++.h>

using namespace std;
bool Matrix[200][200];

int main() {
  int N;
  cin >> N;
  int x;
  int index = 0;
  int sum =0;
  bool flag = 1;
  while (sum!=N*N && cin >> x) {
    sum+=x;
    int temp = index + x;
    flag = !flag;
    while (x--) {
      Matrix[(index+x)/N][(index+x)%N] =flag;
    }
    index =temp;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << Matrix[i][j];
    }
    cout << '\n';
  }

  return 0;
}