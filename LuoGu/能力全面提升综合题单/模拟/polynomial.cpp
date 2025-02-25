/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-10-05 20:35:28
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-10-05 20:44:00
 * @FilePath: \LuoGu\polynomial.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  if (n == 0) {
    cout << k;
  } else {
    if (k == 1) {
      cout << "x^" << n;
    } else if (k == -1) {
      cout << '-' << "x^" << n;
    } else {
      cout << k << "x^" << n;
    }
  }
  n--;
  while (cin >> k) {
    if (n == 0) {
      if (k > 0) {
        cout << '+' << k;
      } else if (k < 0) {
        cout << k;
      }
      break;
    }
    if (n == 1) {
      if (k < 0) {
        if (k == -1) {
          cout << '-' << "x";
        } else {
          cout << k << "x";
        }
        n--;
      } else if(k>0){
        if (k == 1) {
          cout << '+' << "x";
        } else {
          cout << '+' << k << "x";
        }
        n--;
      }else{
        n--;
      }
      continue;
    }
    if (k == 0) {
      n--;
      continue;
    }
    if (k < 0) {
      if (k == -1) {
        cout << '-' << "x^" << n;
      } else {
        cout << k << "x^" << n;
      }
      n--;
    } else {
      if (k == 1) {
        cout << '+' << "x^" << n;
      } else {
        cout << '+' << k << "x^" << n;
      }
      n--;
    }
  }

  return 0;
}