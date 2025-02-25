/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-27 20:20:59
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-09-27 20:21:17
 * @FilePath: \code-practice\leetcode\297.二叉树的序列化与反序列化.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=297 lang=cpp
 *
 * [297] 二叉树的序列化与反序列化
 */

#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <utility>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
#if 1
#define log(x) cout << x << endl;
#elif 0
#define log(x)
#endif
class Codec {
public:
  // Encodes a tree to a single string.
  string serialize(TreeNode *root) {
    if (root == nullptr)
      return string("null");

    string res;
    TreeNode *node = root;
    queue<TreeNode *> NodeQue;
    NodeQue.push(node);
    while (!NodeQue.empty()) {
      node = NodeQue.front();
      NodeQue.pop();
      if (node == nullptr) {
        res += "null,";
      } else {
        res += to_string(node->val) + ',';
        NodeQue.push(node->left);
        NodeQue.push(node->right);
        //   log(res);
      }
    }
    res.pop_back();
    return res;
  }

  // Decodes your encoded data to tree.
  TreeNode *deserialize(string data) {
    if (data == "null") {
      return nullptr;
    }

    // 使用标准库把string类型转换为输入流ss,不需要手动分割int了
    stringstream ss(data);
    string item;
    getline(ss, item, ',');

    // 使用stoi 把string to int， 问就是懒
    TreeNode *head = new TreeNode(stoi(item));
    queue<TreeNode *> NodeQue;
    NodeQue.push(head);

    while (getline(ss, item, ',')) {
      TreeNode *node = NodeQue.front();
      NodeQue.pop();

      if (item != "null") {
        node->left = new TreeNode(stoi(item));
        NodeQue.push(node->left);
      }

      if (!getline(ss, item, ','))
        break;
      if (item != "null") {
        node->right = new TreeNode(stoi(item));
        NodeQue.push(node->right);
      }
    }

    return head;
  }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
