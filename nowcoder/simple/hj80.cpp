/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-04-06 17:54:04
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-04-10 14:23:52
 * @FilePath: \code practice\nowcoder\simple\hj80.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n1,n2;
    set<int> s;
    int n;
    cin>>n1;
    for(int i =0;i<n1;i++){
        cin>>n;
        s.emplace(n);
    }
    cin>>n2;
    for(int i =0;i<n2;i++){
        cin>>n;
        s.emplace(n);
    }
    for(auto e:s){
        cout<<e;
    }
    return 0;
}