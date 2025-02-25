/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-08 16:23:14
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-08 16:36:32
 * @FilePath: \code practice\nowcoder\hj2.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    string a;
    char b;
    getline(cin,a);
    cin>>b;
    int num =0;
    if(b==' '){
        for(auto e :a){
            if(e==b) num++;
        }
    }else if (b>='0' && b<='9')
    {
        for(auto e :a){
            if(e==b) num++;
        }
    }else{
        for(auto e :a){
            if(e==b || e==b+32 || e==b-32) num++;
        }
    }
    
    cout<<num;

    return 0;
}