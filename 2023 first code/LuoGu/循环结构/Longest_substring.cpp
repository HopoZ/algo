/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-05 15:12:47
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-05 15:29:43
 * @FilePath: \LuoGu\Longest_substring.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    std::ios_base::sync_with_stdio(false);

    int n;
    int maxn =0;
    cin>>n;
    int* num =new int[n];
    for(int i =0;i<n;i++){
        cin>>num[i];
    }
    int i =0,j =0;
    for(;i<n;){
        if(num[j+1]==num[j]+1) j++;
        else {
            maxn =max(maxn,j-i+1);
            i =j+1;
            j =i;
        }
    }
    cout<<maxn<<'\n';





    delete[] num;
}