/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-22 10:48:09
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-25 10:02:17
 * @FilePath: \code practice\nowcoder\simple\hj53.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    // 是一个纯数学题吗
    int n;
    cin>>n;
    if(n==1 || n==2){
        cout<<-1;
    }else if((n-2)%4==1 || (n-2)%4==3){
        cout<<2;
    }else if((n-2)%4==2){
        cout<<3;
    }else{
        cout<<4;
    }
    return 0;
}