/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-13 08:56:54
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-13 09:14:43
 * @FilePath: \code practice\nowcoder\hj10.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    string st;
    bool state[128]={false};
    int num =0;
    cin>>st;
    for(auto e:st){
        if(!state[e]) {
            num++;
            state[e] =true;
        }
    }
    cout<<num;
    return 0;
}