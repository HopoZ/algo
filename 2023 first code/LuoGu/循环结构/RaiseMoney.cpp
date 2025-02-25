/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-06 13:57:35
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-06 14:12:11
 * @FilePath: \LuoGu\RaiseMoney.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin>>N;
    for(int k =1;;k++){
        for(int x =0;x<=100;x++){
            if(1092*k+364*x==N) {
                cout<<x<<'\n'<<k<<'\n';
                return 0;
            }
            if(1092*k+364*x>N) break;
        }
    }
}