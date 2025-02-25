/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-15 23:45:55
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-15 23:52:21
 * @FilePath: \LuoGu\Fish.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int num[100];
    int i =0;
    while(cin>>num[i]){
        if(num[i]==0) break;
        i++;
    }
    while(i--){
        cout<<num[i]<<' ';
    }
}
