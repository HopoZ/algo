/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

#include <utility>
#include <vector>
using namespace std;

//! 反向遍历 n^2,1
// class Solution {
// public:
//   void moveZeroes(vector<int> &nums) {
//     for (int i = nums.size() - 1; i >= 0; --i) {
//       if (nums[i] == 0) {
//         int j = i;
//         while (j + 1 < nums.size() && nums[j + 1] != 0) {
//           swap(nums[j], nums[j + 1]);
//           ++j;
//         }
//       }
//     }
//   }
// };

//! 双指针法 n,1
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int slow = 0; // slow point to non-zero,fast the other
    for (int fast = 0; fast < nums.size(); ++fast) {
      // fast才会主动移动，当fast第一次遇到0前slow和fast一致
      // 当fast遇到0后就会快于slow，这样就会发生有效交换
      if (nums[fast] != 0) {
        swap(nums[slow], nums[fast]);
        ++slow;
      }
    }
  }
};