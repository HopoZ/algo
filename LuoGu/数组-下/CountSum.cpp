/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-08-23 10:02:31
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-08-23 10:30:01
 * @FilePath: \LuoGu\CountSum.cpp
 * @Description: God said, Let there be light: and there was light.
 * @ 这道题我感觉我这种跳出循环的方法挺巧的，我真聪明
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int nums[100];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums,nums+n);
    int cnt =0;
    for(int i =2;i<n;i++){
        for(int j =0;j<i-1;j++){
            for(int k =j+1;k<i;k++){
                if(nums[i]==nums[j]+nums[k]){
                    cnt++;
                    k =i,j =i-1;// 跳出两个内层循环
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}