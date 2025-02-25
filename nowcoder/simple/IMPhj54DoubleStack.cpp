/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-27 16:04:43
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-29 07:07:50
 * @FilePath: \code practice\nowcoder\simple\IMPhj54DoubleStack.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */

#include <bits/stdc++.h>

using namespace std;

void compute(stack<int>& st1, stack<char>& st2) {
  int b = st1.top();
  st1.pop();
  int a = st1.top();
  st1.pop();
  char op = st2.top();
  st2.pop();

  switch (op) {
    case '+':
      a += b;
      break;
    case '-':
      a -= b;
      break;
    case '*':
      a *= b;
      break;
    case '/':
      a /= b;
      break;
  }
  st1.push(a);
}

bool priority(char m, char n) {
  if (m == '(')
    return false;
  else if ((m == '+' || m == '-') && (n == '*' || n == '/')) {
    return false;
  }
  return true;
}

int main() {
  string s;
  stack<int> st1;
  stack<char> st2;
  while (cin >> s) {
    st2.push('(');
    s += ')';
    bool flag = false;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '(')
        st2.push('(');
      else if (s[i] == ')') {
        while (st2.top() != '(') {
          compute(st1, st2);

        }
          st2.pop();

      }else if(flag){
        while(priority(st2.top(),s[i])){
            compute(st1,st2);
        }
        st2.push(s[i]);
        flag=false;
      } //TODO 双栈法看不懂
    }
  }
}
