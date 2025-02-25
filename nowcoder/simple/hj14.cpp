/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-14 08:22:27
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-14 09:04:11
 * @FilePath: \code practice\nowcoder\hj14.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    multiset<string> StringList;
    string a;
    while(cin>>a){
        StringList.emplace(a);
    }
    for(auto e :StringList){
        cout<<e<<'\n';
    }
    return 0;
}