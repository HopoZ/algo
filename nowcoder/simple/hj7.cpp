/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-12 10:06:44
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-12 10:12:25
 * @FilePath: \code practice\nowcoder\hj7.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    double a;
    cin>>a;
    if(a-(int)a>=0.5){
        cout<<(int)a+1;
    }else{
        cout<<(int)a;
    }
    
    return 0;
}