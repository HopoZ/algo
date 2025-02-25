/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
 */

#include <unordered_map>
#include <vector>
using namespace std;

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
  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    unordered_map<int, int> inorderMap; // create value to index map
    for (int i = 0; i < inorder.size(); ++i) {
      inorderMap[inorder[i]] = i;
    }

    TreeNode *root =
        dfs(preorder, inorder, inorderMap, 0, inorder.size() - 1, 0);
    return root;
  }

  TreeNode *dfs(vector<int> &preorder, vector<int> &inorder,
                unordered_map<int, int> &inorderMap, int iLeftIndex,
                int iRightIndex, int pRootIndex) {
    if (iRightIndex - iLeftIndex < 0) {
      return nullptr;
    }

    TreeNode *root = new TreeNode(preorder[pRootIndex]);
    int iRootIndex = inorderMap[preorder[pRootIndex]];
    root->left = dfs(preorder, inorder, inorderMap, iLeftIndex, iRootIndex - 1,
                     pRootIndex + 1);
    root->right = dfs(preorder, inorder, inorderMap, iRootIndex + 1,
                      iRightIndex, pRootIndex + iRootIndex - iLeftIndex + 1);
    return root;
  }
};
