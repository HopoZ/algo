/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-30 13:53:24
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-30 14:04:07
 * @FilePath: \LuoGu\pascal.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int a =0,b =0,c =0;
    string str;
    cin>>str;
    for(int i =0;i<str.size();i++){
        if(str[i]=='a'){
            i++;
            while(str[i]==':' || str[i]=='=') i++;
            if(str[i]>='0' && str[i]<='9'){
                a =str[i]-'0';
            }else if(str[i]=='b'){
                a =b;
            }else if(str[i]=='c'){
                a =c;
            }
            i++;
        }
        if(str[i]=='b'){
            i++;
            while(str[i]==':' || str[i]=='=') i++;
            if(str[i]>='0' && str[i]<='9'){
                b =str[i]-'0';
            }else if(str[i]=='a'){
                b =a;
            }else if(str[i]=='c'){
                b =c;
            }
            i++;
        }
        if(str[i]=='c'){
            i++;
            while(str[i]==':' || str[i]=='=') i++;
            if(str[i]>='0' && str[i]<='9'){
                c =str[i]-'0';
            }else if(str[i]=='a'){
                c =a;
            }else if(str[i]=='b'){
                c =b;
            }
            i++;
        }
    }
    cout<<a<<' '<<b<<' '<<c;
    return 0;
}