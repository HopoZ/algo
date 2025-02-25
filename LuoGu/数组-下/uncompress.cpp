/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-15 13:16:20
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-15 14:14:20
 * @FilePath: \LuoGu\uncompress.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int Str[40000];
    int cnt =0;
    int index =0;
    char a ='0',b ='0';
    while(cin>>a){
        if(a==b){
            Str[index]++;
            cnt++;
        }
        else{
            Str[++index]++;
            cnt++;
            b =a;
        }
    }
    cout<<sqrt(cnt)<<' ';
    for(int i =0;i<=index;i++){
        cout<<Str[i]<<' ';
    }
    return 0;
}