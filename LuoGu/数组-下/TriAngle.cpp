/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-08-30 20:06:07
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-08-30 21:30:55
 * @FilePath: \LuoGu\TriAngle.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

    int TriNum[21][21];
int main() {
    int n;
    cin>>n;
    TriNum[1][1] =1;
        for(int j =2;j<=n;j++){
            for(int k =1;k<=j;k++){
                TriNum[j][k] =TriNum[j-1][k-1]+TriNum[j-1][k];
            }
        }
        for(int j =1;j<=n;j++){
            for(int k =1;k<=j;k++){
                cout<<TriNum[j][k]<<' ';
            }
            cout<<'\n';
        }
    return 0;
}