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
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    if (intervals.size() == 0) {
      return {};
    }
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for (int i = 0; i < intervals.size(); ++i) {
      int L = intervals[i][0], R = intervals[i][1];
      if (!merged.size() || merged.back()[1] < L) {
        merged.push_back({L, R});
      } else {
        merged.back()[1] = max(merged.back()[1], R);
      }
    }
    return merged;
  }
};