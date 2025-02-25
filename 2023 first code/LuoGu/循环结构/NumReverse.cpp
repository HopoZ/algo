/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-05-29 14:28:23
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-01 22:39:28
 * @FilePath: \LuoGu\NumReverse.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    bool flag =0;
    if(N<0) {
        N= -N;
        flag =1;
    }
    int num[9];
    fill(num,num+9,-1);
    int i =0;
    while(N!=0){
        num[i++] =N%10;
        N/=10;
    }
    i--;
    int M =0;
    int j =0;
    int p =1;

    while(i!=-1){
        M +=num[i]*p;
        j++,i--;
        p*=10;
    }
    if(flag) M =-M;
    cout<<M;

}
    