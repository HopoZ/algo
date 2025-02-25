/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-05-29 14:21:32
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-05-29 14:24:10
 * @FilePath: \LuoGu\小玉在游泳.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    double s;
    cin>>s;
    double step =2;
    double length =0;
    int cnt =0;
    while(length<s){
        length+=step;
        step*=0.98;
        cnt++;
    }
    cout<<cnt;
}