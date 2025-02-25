/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-18 16:54:51
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-09-18 16:56:58
 * @FilePath: \code-practice\leetcode\226.翻转二叉树.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] 翻转二叉树
 */

#include <cstddef>
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
  TreeNode *invertTree(TreeNode *root) {
    TreeNode *node = root;
    Traversal(node);
    return root;
  }
  void Traversal(TreeNode *node) {
    if(node == nullptr) return;
    TreeNode *temp;
    temp = node->left;
    node->left = node->right;
    node->right = temp;
    Traversal(node->left);
    Traversal(node->right);
  }
};
