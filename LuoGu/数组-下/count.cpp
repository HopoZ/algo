/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-08-19 20:55:01
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-08-19 21:25:51
 * @FilePath: \LuoGu\count.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int M,N;
    int nums[10]={0};
    cin>>M>>N;
    for(int i =M;i<=N;i++){
        int j =i;
        while(j!=0){
            nums[j%10]++;
            j/=10;
        }
    }
    for(int i =0;i<10;i++){
        cout<<nums[i]<<' ';
    }
}