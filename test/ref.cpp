/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-08-06 20:47:37
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-12-18 16:47:47
 * @FilePath: \code-practice\test\1.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */

#include <algorithm>
#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
  string crackPassword(vector<int> &password) {
    vector<string> Str;
    for (int i = 0; i < password.size(); i++) {
      Str.push_back(to_string(password[i]));
    }

    quickSort(Str, 0, Str.size() - 1);
    string res;
    for (int i = 0; i < Str.size(); i++) {
      res.append(Str[i]);
    }
    return res;
  }
  void quickSort(vector<string> &password, int left, int right) {
    if (left >= right)
      return;
    int pivot = left;
    int l = left + 1, r = right;
    while (l <= r) {
      while (l <= r &&
             password[l] + password[pivot] <= password[pivot] + password[l]) {
        l++;
      }
      while (l <= r &&
             password[pivot] + password[r] < password[r] + password[pivot]) {
        r--;
      }
      if (l < r) {
        swap(password[l], password[r]);
      }
    }
    swap(password[r], password[pivot]);
    quickSort(password, left, r - 1);
    quickSort(password, r + 1, right);
  }
};

int main() {
  Solution solution;
  vector<int> a = {0, 3, 30, 34, 5, 9};
  solution.crackPassword(a);

  return 0;
}