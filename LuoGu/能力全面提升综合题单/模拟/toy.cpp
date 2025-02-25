/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-10-08 20:08:33
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-10-10 19:33:47
 * @FilePath: \LuoGu\toy.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
struct node
{
    string name;
    bool direction;
}toy[100001];

int main() {
    int n,m;
    cin>>n>>m;
    for(int i =0;i<n;i++){
        cin>>toy[i].direction>>toy[i].name;
    }
    bool isRight;
    int step,nowPos=0;
    for(int i =0;i<m;i++){
        cin>>isRight>>step;
        if(isRight && toy[nowPos].direction || !isRight && !toy[nowPos].direction ){
            nowPos =(nowPos-step>=0)?(nowPos-step):(nowPos-step+n);
        }else{
            nowPos =(nowPos+step)%n;
        }
    }
    cout<<toy[nowPos].name;

    return 0;
}