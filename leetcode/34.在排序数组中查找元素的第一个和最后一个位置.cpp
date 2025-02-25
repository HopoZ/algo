/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-11-17 18:13:00
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-11-17 18:14:32
 * @FilePath:
 * \code-practice\leetcode\34.在排序数组中查找元素的第一个和最后一个位置.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

#include <vector>
using namespace std;

#if 1
#define log(x) cout << x << endl;
#elif 0
#define log(x)
#endif
class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    if (nums.size() == 0)
      return {-1, -1};
    vector<int> res;
    int low = 0, high = nums.size() - 1;
    int mid = (low + high) / 2;
    return vector<int>{searchOneSide(nums, target, low, high),
                       searchOneSide(nums, target, high, low)};
  }

private:
  int searchOneSide(vector<int> &nums, int target, int sideEdge, int now) {
    if (sideEdge == now) {
      if (nums[now] == target) {
        return now;
      }
      return -1;
    } else if (sideEdge < now) {
      int left = sideEdge, right = now;
      int loc = -1;
      while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
          loc = mid;
          right = mid - 1;
        } else if (nums[mid] < target) {
          left = mid + 1;
        } else if (nums[mid] > target) {
          right = mid - 1;
        }
      }
      return loc;
    } else {
      int right = sideEdge, left = now;
      int loc = -1;
      while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
          loc = mid;
          left = mid + 1;
        } else if (nums[mid] < target) {
          left = mid + 1;
        } else if (nums[mid] > target) {
          right = mid - 1;
        }
      }
      return loc;
    }
  }
};
