/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-22 08:36:47
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-09-22 08:38:36
 * @FilePath: \code-practice\leetcode\110.平衡二叉树.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
 */

#include <iostream>
#include <queue>
#include <stdexcept>
#include <utility>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  bool isBalanced(TreeNode *root) {
    Height(root);
    if(notBalanced){
        return false;
    }
    return true;
    }
private:
bool notBalanced =false;
  int Height(TreeNode *node) {
    if (node == nullptr)
      return 0;
    int lh =Height(node->left);
    int rh =Height(node->right);
    if(lh-rh >1 || lh -rh <-1) notBalanced =true;
    return max(lh,rh) + 1;
  }
};
