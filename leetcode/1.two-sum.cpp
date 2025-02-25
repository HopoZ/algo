/*
 * @ lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

#include <unordered_map>
#include <vector>
using namespace std;

//! 简单不懵逼伤脑的暴力法
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i =0;i<nums.size();i++){
//             for(int j =i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     return vector<int>(i,j);
//                 }
//             }
//         }
//     }
// };

//! Hash法
class Solution {
public:
  // EXP Time:O(n) 插入n次 Space:O(n) 建表n长
  vector<int> twoSum(vector<int> &nums, int target) {
    // hashMap只能查询key是否在table中，所以key设置为数组中元素值，value设置为元素下标
    unordered_map<int, int> Umap;

    for (int i = 0; i < nums.size(); ++i) {
      // auto大法好
      auto it = Umap.find(target - nums[i]);
      if (it != Umap.end()) {
        return vector<int>{i, it->second};
      }

      Umap.insert({nums[i], i});
    }

    return vector<int>{-1, -1};
  }
};