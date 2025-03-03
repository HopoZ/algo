#include "leetcode-definition.h"
/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  int subarraySum(vector<int> &nums, int k) {
    int res = 0;
    int sum = 0;
    unordered_map<int, int> hashTable;
    hashTable[0] =
        1; // 用于k-sum判断时整个前缀和本身就等于k，无需减去之前某个前缀和
    for (int i = 0; i < nums.size(); ++i) {
      sum += nums[i];
      if (hashTable.find(sum - k) !=
          hashTable.end()) { // k=当前前缀和sum-某个前缀和
        res += hashTable[sum - k];
      }
      ++hashTable[sum];
    }
    return res;
  }
};
