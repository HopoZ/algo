/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-30 22:16:19
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-30 22:22:42
 * @FilePath: \LuoGu\fraction.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
int fra(int n){
    int f =1;
    for(int i =1;i<=n;i++){
        f*=i;
    }
    return f;
}


int main() {
    int n;
    cin>>n;
    cout<<fra(n);
    return 0;
}