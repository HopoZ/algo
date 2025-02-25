/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-12 10:07:00
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-12 11:03:45
 * @FilePath: \code practice\nowcoder\hj9.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int a,b =0;
    cin>>a;
    bool st[10] ={false};
    do{
        int c=a%10;
        if(!st[c]){
            b=b*10+c;
            st[c] =true;
        }
        a/=10;
    }while(a>0);
    cout<<b;
    
    return 0;
}