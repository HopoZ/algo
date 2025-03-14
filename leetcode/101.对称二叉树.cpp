/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
  bool isSymmetric(TreeNode *root) {
    if(root == nullptr) return true;
    return dfs(root->left, root->right);
  }
  bool dfs(TreeNode *left, TreeNode *right) {
    if (left == nullptr || right == nullptr) {
      return left == right;
    }
    if (left->val != right->val)
      return false;
    return dfs(left->left,right->right) && dfs(left->right, right->left);
  }
};
