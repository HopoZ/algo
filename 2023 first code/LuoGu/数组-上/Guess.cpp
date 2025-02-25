/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-07-09 13:49:17
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-07-09 22:04:07
 * @FilePath: \LuoGu\Guess.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int num;
    set<int> Tnum;
    for(int i=0;i<7;i++){
        cin>>num;
        Tnum.emplace(num);
    }

    int RightNum[7]={0};
    while(n--){
        int cnt =0;
        for(int i=0;i<7;i++){
            cin>>num;
            if(Tnum.find(num)!=Tnum.end() ) cnt++;
        }
        if(cnt==0) continue;
        RightNum[7-cnt]++;
    }
    for(int i =0;i<7;i++){
        cout<<RightNum[i]<<' ';
    }


}