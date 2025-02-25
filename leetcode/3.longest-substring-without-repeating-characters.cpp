/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2025-01-09 14:19:16
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2025-02-07 18:49:09
 * @FilePath:
 * \code-practice\leetcode\3.longest-substring-without-repeating-characters.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2025 by future, All Rights Reserved.
 */
#include "leetcode-definition.h"
/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
#define INPUT "./bin/test_case.txt"

#include <set>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// class Solution {
// public:
//   int lengthOfLongestSubstring(string s) {
//     if (s.empty()) {
//       return 0;
//     }
//     int res = 0;
//     unordered_set<char> sSet;
//     sSet.emplace(s[0]);
//     int right = 1;
//     for (int left = 0; left < s.size(); ++left) {

//       while (right < s.size() && sSet.find(s[right]) == sSet.end()) {
//         sSet.emplace(s[right++]);
//       }
//       res = max(res, right - left);
//       sSet.erase(s[left]);
//     }
//     return res;
//   }
// };
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int res = 0;
    int left = 0;
    int right = 0;
    unordered_set<char> hashTable;

    while (right < s.length()) {
      if (hashTable.find(s[right]) == hashTable.end()) {
        // s[right]未在hashTable里时
        hashTable.insert(s[right++]);
      } else {
        res = max(res, right - left);
        hashTable.erase(s[left++]);
      }
    }
    res = max(res, right - left);
    return res;
  }
};