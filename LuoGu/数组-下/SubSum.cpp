/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-08-23 20:31:37
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-08-23 20:41:35
 * @FilePath: \LuoGu\SubSum.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int sum,MinNum=0x3f3f3f3f;
    for(int i =1;i<=n-m+1;i++){
        sum =0;
        for(int j=i;j<=i+m-1;j++){
            sum+=a[j];
        }
        if(MinNum>sum) MinNum =sum;

    }
    cout<<MinNum;
    return 0;
}