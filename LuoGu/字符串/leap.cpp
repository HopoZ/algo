/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-30 14:53:55
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-30 22:14:47
 * @FilePath: \LuoGu\leap.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
bool isLeap(int year){
    if(year%4==0 && year%100!=0 || year%400==0){
        return true;
    }
    return false;
}

int main() {
    int ans[360];
    int start,end,k =0;
    cin>>start>>end;
    for(int i =start;i<=end;i++){
        if(isLeap(i)){
            ans[k++] =i;
        }
    }
    cout<<k<<'\n';
    for(int i =0;i<k;i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}