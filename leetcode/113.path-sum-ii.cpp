/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
 */

#include <vector>
using namespace std;
#define INPUT "./bin/test_case.txt"

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
private:
  vector<vector<int>> res;
  vector<int> path;

public:
  vector<vector<int>> pathSum(TreeNode *root, int targetSum) {
    if (root == nullptr)
      return res;
    DFS(root, targetSum, 0);
    return res;
  }
  void DFS(TreeNode *node, int targetSum, int nowSum) {
    nowSum += node->val;
    path.push_back(node->val);
    if (node->left == nullptr &&
        node->right == nullptr) { // 递归底层，叶节点判定
      if (nowSum == targetSum) {
        res.push_back(path);
        path.pop_back();
        return;
      } else {
        path.pop_back();
        return;
      }
    }

    if (node->left != nullptr) {
      DFS(node->left, targetSum, nowSum);
    }
    if (node->right != nullptr) {
      DFS(node->right, targetSum, nowSum);
    }
    path.pop_back();
    return;
  }
};
