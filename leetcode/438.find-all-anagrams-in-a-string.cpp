#include "leetcode-definition.h"
/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> findAnagrams(string s, string p) {
    vector<int> res;
    if (s.size() < p.size()) {
      return res;
    }
    vector<int> sVector(26);
    vector<int> pVector(26);
    int index;
    for (index = 0; index < p.size(); ++index) {
      sVector[s[index] - 'a']++;
      pVector[p[index] - 'a']++;
    }
    if (sVector == pVector) {
      res.emplace_back(index - p.size());
    }
    for (; index < s.size(); ++index) {
      sVector[s[index - p.size()] - 'a']--;
      sVector[s[index] - 'a']++;
      if (sVector == pVector) {
        res.emplace_back(index - p.size() + 1);
      }
    }
    return res;
  }
};
