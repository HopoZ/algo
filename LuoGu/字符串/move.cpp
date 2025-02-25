/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-23 17:02:41
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-23 17:07:45
 * @FilePath: \LuoGu\move.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string before;
    cin>>before;
    string after ="";
    for(auto e: before){
        if(e+n>'z') e= e+n-'z'+'a'-1;
        else e =e+n;
        after+=e;
    }
    cout<<after;
    return 0;
}