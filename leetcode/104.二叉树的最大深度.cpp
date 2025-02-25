/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-20 20:00:31
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-09-20 20:01:06
 * @FilePath: \code-practice\leetcode\104.二叉树的最大深度.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
  int maxDepth(TreeNode *root) {
    if (root == nullptr)
      return 0;

    levelOrderTraversal(root);
    return level;
  }

private:
  int level = 0;
  queue<TreeNode *> que;
  void levelOrderTraversal(TreeNode *const root) {
    TreeNode *node = root;
    que.emplace(node);
    while (!que.empty()) {
      ++level;
      int levelSize = que.size();
      for (int i = 0; i < levelSize; i++) {
        node = que.front();
        que.pop();
        if (node->left != nullptr)
          que.push(node->left);
        if (node->right != nullptr)
          que.push(node->right);
      }
    }
    return;
  }
};
