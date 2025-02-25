/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-03 15:48:24
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-03 16:18:43
 * @FilePath: \LuoGu\Fibonacci.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long first =0,second =1;

    int n;
    cin>>n;
    while(n--){
        unsigned long long temp =second;
        second =first+second;
        first =temp;
    }
    cout<<first<<".00";
}