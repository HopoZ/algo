/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-30 22:38:25
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-30 22:46:34
 * @FilePath: \LuoGu\peach.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
int BEat(int peach){
    peach =(peach+1)*2;
    return BEat;
}

int main() {
    int k =1;
    int n;
    cin>>n;
    for(int i =1;i<n;i++){
        k =BEat(k);
    }
    cout<<k;
    return 0;
}