/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-27 21:23:01
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-11-13 22:25:08
 * @FilePath: \code-practice\test\test.cpp
 * @Description: God said, Let there be light: and there was light
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */

#include <algorithm>
#include <cstddef>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int res = 0;
    for (int i = 0; i < s.length(); ++i) {
      unordered_set<char> hashTable;
      hashTable.insert(s[i]);
      int nowLen = 1;
      for (int j = i + 1; j < s.length(); ++j) {
        if (hashTable.find(s[j]) == hashTable.end()) {
          ++nowLen;
          hashTable.insert(s[j]);
        } else {
          res = max(res, nowLen);
        }
      }
    }
    return res;
  }
};