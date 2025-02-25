/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-10-13 17:08:17
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-10-13 18:26:52
 * @FilePath: \LuoGu\Pingpong.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    char ch;
    string halfAns ="";
    int score1A =0,score2A =0;
    int score1B =0,score2B =0;
    while(cin>>ch){
        if(ch=='E'){
            cout<<score1A<<':'<<score2A<<'\n';
            halfAns = halfAns + to_string(score1B) + ':' + to_string(score2B) + '\n';
            break;
        }
        if(ch=='W'){
            score1A++;
            score1B++;
        }else{
            score2A++;
            score2B++;
        }
        if((score1A>=11 || score2A>=11 )&&abs(score1A-score2A)>=2){
            cout<<score1A<<':'<<score2A<<'\n';
            score1A =0,score2A =0;
        }
        if((score1B>=21||score2B>=21)&&abs(score1B-score2B)>=2){
            halfAns = halfAns + to_string(score1B) + ':' + to_string(score2B) + '\n';
            score1B =0,score2B =0;
        }

    }
    cout<<'\n'<<halfAns;
    return 0;
}