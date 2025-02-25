/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-30 13:44:45
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-30 13:49:20
 * @FilePath: \LuoGu\ride.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    string a,b;
    int suma =1,sumb =1;
    cin>>a>>b;
    for(auto e:a){
        suma*=e-'A'+1;
    }
     for(auto e:b){
        sumb*=e-'A'+1;
    }
    suma%=47;
    sumb%=47;
    if(suma==sumb){
        cout<<"GO";
    }else{
        cout<<"STAY";
    }
    return 0;
}