/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-06 14:16:48
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-06 14:26:26
 * @FilePath: \LuoGu\Budget.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
   int budget[12];
   for(int i=0;i<12;i++){
    cin>>budget[i];
   } 
   int Hand =0,Mom =0;
   for(int i =0;i<12;i++){
    Hand =Hand+300-budget[i];
    if(Hand<0) {
        cout<<-i-1<<'\n';
        return 0;
    }
    while(Hand>=100){
        Hand-=100;
        Mom+=100;
    }
   }
   Hand+=Mom*1.2;
   cout<<Hand<<'\n';
}