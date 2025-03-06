#include "leetcode-definition.h"
/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

#include <vector>
using namespace std;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;
    for (int i = 0; i < k; ++i) {
      int j = i;
      int temp = nums[i];
      do {
        int next = (j + k) % n;
        swap(temp, nums[next]);

      } while (j != i);
      nums[i] = temp;
    }
    return;
  }
};
