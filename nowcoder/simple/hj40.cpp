/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-21 11:41:08
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-21 11:53:16
 * @FilePath: \code practice\nowcoder\simple\hj40.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  string st;
  getline(cin, st);
  int CharNum =0,SpaceNum =0,NumNum =0,OtherNum =0;
  for(auto e :st) {
    if(e>='a'&&e<='z'||e>='A'&&e<='Z'){
        CharNum++;
    }else if(e==' '){
        SpaceNum++;
    }else if(e>='0'&&e<='9'){
        NumNum++;
    }else{
        OtherNum++;
    }
  }
  cout<<CharNum<<'\n'<<SpaceNum<<'\n'<<NumNum<<'\n'<<OtherNum<<'\n';

  return 0;
}