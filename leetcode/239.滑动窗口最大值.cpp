/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-04 16:09:42
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-09-04 16:11:59
 * @FilePath: \code-practice\leetcode\239.滑动窗口最大值.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

#include <deque>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> maxSlidingWindow(vector<int> &nums, int k) {
    vector<int> res;
    deque<int> dq;
    for (int i = 0; i < nums.size(); i++) {
      // 去除离开视距的最大值
      if (!dq.empty() && dq.front() < i - k + 1) {
        dq.pop_front();
      }
      
      //把队尾小元素删掉，放入当前元素
      while (!dq.empty() && nums[dq.back()] <= nums[i]) {
        dq.pop_back();
      }
      dq.push_back(i);
      
      //保存最大值结果
      if(i>=k-1){
        res.emplace_back(nums[dq.front()]);
      }
    }
    return res;
  }
};
