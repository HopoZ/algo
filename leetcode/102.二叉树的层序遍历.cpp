/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-13 19:38:12
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-11-11 19:19:56
 * @FilePath: \code-practice\leetcode\102.二叉树的层序遍历.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-13 19:38:12
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-09-13 20:34:10
 * @FilePath: \code-practice\leetcode\102.二叉树的层序遍历.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
  vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> res;
    vector<int> resPart;
    if (root == nullptr) {
      return res;
    }
    TreeNode *node = root;
    queue<TreeNode *> NodeQue;
    NodeQue.push(node);
    while (!NodeQue.empty()) {
      int NodeLevel = NodeQue.size();
      for (int i = 0; i < NodeLevel; i++) {
        node = NodeQue.front();
        resPart.emplace_back(node->val);
        if (node->left != nullptr) {
          NodeQue.push(node->left);
        }
        if (node->right != nullptr) {
          NodeQue.push(node->right);
        }
        NodeQue.pop();
      }
      res.emplace_back(resPart);
      resPart.resize(0);
    }
    return res;
  }
};
