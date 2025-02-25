/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-12-24 16:41:58
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-12-24 16:42:21
 * @FilePath: \code-practice\leetcode\154.寻找旋转排序数组中的最小值-ii.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=154 lang=cpp
 *
 * [154] 寻找旋转排序数组中的最小值 II
 */

#include <vector>
using namespace std;

class Solution {
public:
  int findMin(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
      int mid = (left + right) / 2;
      if (nums[mid] > nums[right]) {
        left = mid + 1;
      } else if (nums[mid] < nums[right]) {
        right = mid;
      }else{
        right--;
      }
    }
    return nums[left]; // min at the left after convergence
  }
};
