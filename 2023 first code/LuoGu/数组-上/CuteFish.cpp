/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-15 23:27:30
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-15 23:33:42
 * @FilePath: \LuoGu\CuteFish.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int* fish =new int[n];
    for(int i =0;i<n;i++){
        cin>>fish[i];
    }

    for(int j =0;j<n;j++){
        int num =0;
        for(int i =0;i<j;i++){
            if(fish[i]<fish[j]) {
                num++;
            }
        }
        cout<<num<<' ';
    }
}