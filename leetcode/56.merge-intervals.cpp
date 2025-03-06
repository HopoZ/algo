/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    if (intervals.empty()) {
      return vector<vector<int>>{};
    }

    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());
    res.emplace_back(intervals[0]);
    for (int i = 1; i < intervals.size(); ++i) {
      int left = intervals[i][0], right = intervals[i][1];
      if (res.back()[1] < left) {
        res.emplace_back(vector<int>{left, right});
      } else {
        res.back()[1] = max(res.back()[1], right);
      }
    }
    return res;
  }
};
