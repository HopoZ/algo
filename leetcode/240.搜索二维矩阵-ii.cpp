/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-12-18 17:06:15
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-12-18 17:07:05
 * @FilePath: \code-practice\leetcode\240.搜索二维矩阵-ii.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] 搜索二维矩阵 II
 */

#include <vector>
using namespace std;

class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int width = matrix.size();
    int length = matrix[0].size();
    int iIndex = width - 1, jIndex = 0;
    while (iIndex>-1 && jIndex<length) {
      if (matrix[iIndex][jIndex] == target)
        return true;
      if (matrix[iIndex][jIndex] < target) {
        jIndex++;
      } else {
        iIndex--;
      }
    }
    return false;
  }
};
