/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-27 12:51:22
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-28 20:19:04
 * @FilePath: \LuoGu\字符串\phone.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
 
int main() {
    string str;
    int num=0;
    getline(cin,str);
    for(auto e:str){
        if(e=='\n'||e=='\r') continue;//万恶的换行，回车符
        if(e==' ') {
            num++;
            continue;
        }
        if(e>='p' && e<='s'){
            for (int i = 0; i <= e-'p'; i++)
            {
                num++;
            }
            continue;    
        }
        if(e>='t' && e<='v'){
            for (int i = 0; i <= e-'t'; i++)
            {
                num++;
            }
            continue;
            
        }
        if(e>='w'){
            for (int i = 0; i <= e-'w'; i++)
            {
                num++;
            }
            continue;
        }
        for(int i =0;i<=(e-'a')%3;i++){
            num++;
        }
    }   
    cout<<num;
    return 0;
}