/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-30 22:47:43
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-30 23:16:29
 * @FilePath: \LuoGu\train.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
struct trainer
{
    string name;
    int age;
    int grade;
};



int main() {
    int n;
    cin>>n;
    struct trainer trainers[5];
    for(int i =0;i<n;i++){
        cin>>trainers[i].name;
        cin>>trainers[i].age;
        trainers[i].age+=1;
        cin>>trainers[i].grade;
        trainers[i].grade*=1.2;
        if(trainers[i].grade>600) trainers[i].grade =600;
    }
    for(int i =0;i<n;i++){
        cout<<trainers[i].name<<' ';
        cout<<trainers[i].age<<' ';
        cout<<trainers[i].grade<<'\n';
    }
    
    return 0;
}