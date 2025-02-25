/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-12-24 08:51:46
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-12-24 15:51:54
 * @FilePath: \code-practice\leetcode\153.寻找旋转排序数组中的最小值.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */

/*
 * @lc app=leetcode.cn id=153 lang=cpp
 *
 * [153] 寻找旋转排序数组中的最小值
 */

#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left =0;
        int right =nums.size()-1;
        while(left<right){
            int mid =(left+right)/2;
            if(nums[mid]>nums[right]){
                left =mid+1;
            }else{
                right =mid;
            }
        }
        return nums[left]; // min at the left after convergence
    }
};

