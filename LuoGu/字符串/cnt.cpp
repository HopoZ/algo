/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-25 16:05:02
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-25 16:21:54
 * @FilePath: \LuoGu\cnt.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    int cnt =0;
    for(auto e:s){
        if(e==' ' || e=='\n') continue;
        else cnt++;
    }
    cout<<cnt;
    return 0;
}