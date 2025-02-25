/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-25 16:29:46
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-26 10:32:45
 * @FilePath: \LuoGu\str.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin>>q;
    string str1;
    string str2;
    cin>>str1;
    while(q--){
        int p;
        cin>>p;
        switch (p )
        {
        case 1:
            cin>>str2;
            str1 =str1+str2;
            cout<<str1<<'\n';
            break;
        case 2:
            int num1,num2;
            cin>>num1>>num2;
            str1 =str1.substr(num1,num2);
            cout<<str1<<'\n';
            break;
        case 3:
            int num;
            cin>>num>>str2;
            str1.insert(num,str2);
            cout<<str1<<'\n';
            break;
        case 4:
            cin>>str2;
            // cout<<"HIT"<<str1.find(str2)<<' ';
            // cout<<((str1.find(str2)==string::npos)?-1:str1.find(str2))<<'\n';
            if(str1.find(str2)==string::npos){
                cout<<-1<<'\n';
            }else{
                cout<<str1.find(str2)<<'\n';
            }
            break;
        default:
            break;
        }
    }
    return 0;
}