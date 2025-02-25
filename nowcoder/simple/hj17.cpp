/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-15 09:15:45
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-18 17:36:03
 * @FilePath: \code practice\nowcoder\hj17.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
bool isLegal(string b){
    regex pattern("^[ADWS]\\d{1,2}$");
    return regex_match(b,pattern);
}

int main() {
    char a;
    int x =0,y =0;
    string b ="";
    while (cin>>a)
    {
        if(a==';'){
            if(isLegal(b)){
                if(b[0]=='W'){
                    y+=stoi(b.substr(1));
                }else if(b[0]=='A'){
                    x-=stoi(b.substr(1));

                }else if(b[0]=='S'){
                    y-=stoi(b.substr(1));

                }else{
                    x+=stoi(b.substr(1));
                }
            }
            b ="";
        }else{
        b+=a;
        }
    }
    cout<<x<<','<<y;
    
    return 0;
}