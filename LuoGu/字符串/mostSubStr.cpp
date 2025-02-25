/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-28 20:19:24
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-28 21:36:30
 * @FilePath: \LuoGu\mostSubStr.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnt =0;
    for(int i =0;i<n;i++){
        if(str[i]=='V' && str[i+1]=='K'){
            cnt++;
            i++;
        }
    }

    if(str.find("VVV")!=string::npos || str.find("KKK")!=string::npos || str[0]=='K'&&str[1]=='K' || str[n-2]=='V'&&str[n-1]=='V'){
        cnt++;
    }
    cout<<cnt;
    return 0;
}