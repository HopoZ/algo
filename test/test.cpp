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
  int maxSubArray(vector<int> &nums) {
    int res = -0x3f3f3f;
    vector<int> maxPrefixSum(nums.size());
    maxPrefixSum[0] = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
      if (maxPrefixSum[i - 1] > 0) {
        maxPrefixSum[i] = nums[i] + maxPrefixSum[i - 1];
      } else {
        maxPrefixSum[i] = nums[i];
      }
    }
    for (int i = 0; i < nums.size(); ++i) {
      res = max(res, maxPrefixSum[i]);
    }
    return res;
  }
};

int main(){
  std::cout<<
}