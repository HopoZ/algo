/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-22 21:09:57
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-09-22 21:10:42
 * @FilePath: \code-practice\leetcode\235.二叉搜索树的最近公共祖先.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
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
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    dfs(root, p, q);
    return res;
  }

private:
  TreeNode *res = nullptr;
  struct pqAn {
    bool pAncestor, qAncestor;
  };

  pqAn dfs(TreeNode *node, TreeNode *p, TreeNode *q) {
    if (res != nullptr) {
      return pqAn{false, false}; // 提前结束无意义搜索
    }
    if (node == nullptr) {
      return pqAn{false, false};
    }

    pqAn Anl = dfs(node->left, p, q);
    pqAn Anr = dfs(node->right, p, q);

    pqAn An = pqAn{false, false};
    An.pAncestor = Anl.pAncestor || Anr.pAncestor || node == p;
    An.qAncestor = Anl.qAncestor || Anr.qAncestor || node == q;

    if (An.pAncestor && An.qAncestor && res == nullptr) {
      res = node;
    }

    return An;
  }
};
