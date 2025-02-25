#include "leetcode-definition.h"
#include <vector>
using namespace std;

class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    vector<int> DP(nums.size());
    DP[0] = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
      if (DP[i - 1] > 0) {
        DP[i] = DP[i - 1] + nums[i];
      } else {
        DP[i] = nums[i];
      }
    }
    int Max = -0x3f3f3f;
    for (int i = 0; i < nums.size(); ++i) {
      if (Max < DP[i]) {
        Max = DP[i];
      }
    }
    return Max;
  }
};