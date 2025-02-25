/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-08 16:43:45
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-08 16:46:43
 * @FilePath: \code practice\nowcoder\hj3.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin>>N;
    set<int> s;
    int n;
    while (cin>>n)
    {
        s.emplace(n);
    }
    for(int i : s){
        cout<<i<<'\n';
    }
    
    return 0;
}