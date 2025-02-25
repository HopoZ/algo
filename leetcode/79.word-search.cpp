
/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-12-27 13:40:12
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-12-27 13:44:06
 * @FilePath: \code-practice\leetcode\79.单词搜索.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
#define INPUT "./bin/test_case.txt"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool visited[6][6];

class Solution {
public:
  bool exist(vector<vector<char>> &board, string word) {
    if (board.empty() || board[0].empty())
      return false;
    int width = board.size();
    int length = board[0].size();

    memset(
        visited, false,
        sizeof(
            visited)); // 本地不用，因为本地在堆上会默认初始化为false，但leetcode在线调试过不去

    for (int i = 0; i < width; i++) {
      for (int j = 0; j < length; j++) {

        if (dfs(i, j, 0, board, word))
          return true;
      }
    }
    return false;
  }

  // 返回匹配word最后多少位
  bool dfs(int i, int j, int index, vector<vector<char>> &board, string &word) {
    // cout << "now dfs: i,j,index:" << i << ' ' << j << ' ' << index << '\n';
    int width = board.size();
    int length = board[0].size();
    if (board[i][j] != word[index]) {
      return false;
    } // 剪枝
    else if (index == word.size() - 1) {
      return true; // 最底层递归结束
    }

    visited[i][j] = true; // 标记,防止往回走
    vector<pair<int, int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool res = false;
    for (auto dir : directions) {
      int newi = i + dir.first, newj = j + dir.second;
      if (newi >= 0 && newi < width && newj >= 0 && newj < length &&
          !visited[newi][newj]) {
        if (dfs(newi, newj, index + 1, board, word)) {
          // cout << "true i,j,index:" << i << ' ' << j << ' ' << index << '\n';
          res = true;
          break;
        }
      }
    }
    visited[i][j] = false; // 回溯，恢复标记
    return res;
  }
};
