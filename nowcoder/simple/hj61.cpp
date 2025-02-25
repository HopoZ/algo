/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-31 08:23:37
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-04-01 14:19:07
 * @FilePath: \code practice\nowcoder\simple\hj61.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
int f(int m,int n){
    if(m<0 || n<0){
        return 0;
    }
    else if(m==1 || n==1){
        return 1;
    }
    else return f(m,n-1)+f(m-n,n);
}


int main() {
    int m,n;
    cin>>m>>n;
    cout<<f(m,n);
    return 0;
}