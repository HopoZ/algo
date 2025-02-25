/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-05 16:04:14
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-05 16:09:16
 * @FilePath: \LuoGu\score.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int *num =new int[n];
    for(int i =0;i<n;i++){
        cin>>num[i];
    }

    int max =-1,min =11;
    for(int i =0;i<n;i++){
        if(num[i]>max) max =num[i];
        if(num[i]<min) min =num[i];
    }
    float sum =0;
    for(int i =0;i<n;i++){
        sum+=num[i];
    }
    sum =sum-max-min;
    cout<<fixed<<setprecision(2);
    cout<<sum/(n-2);
}