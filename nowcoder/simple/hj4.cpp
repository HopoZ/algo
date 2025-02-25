/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-10 16:17:43
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-10 16:36:57
 * @FilePath: \code practice\nowcoder\hj4.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin>>a;
    int i =0;
    while (1)
    {
        if(i<a.length()) cout<<a[i];
        else cout<<'0';
        i++;
        if(i%8==0) cout<<'\n';
        if(i%8==0 && i>=a.length()) break;
    }
    
    return 0;
}