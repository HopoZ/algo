/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-20 16:09:55
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-20 16:11:54
 * @FilePath: \code practice\nowcoder\hj34.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int ch[256]={0};
    string a;
    cin>>a;
    for(int i =0;i<a.size();i++){
        ch[a[i]]++;
    }
    for(int i =0;i<256;i++){
        for(int j =0;j<ch[i];j++){
            cout<<char(i);
        }
    }
    return 0;
}