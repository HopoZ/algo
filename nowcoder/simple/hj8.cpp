/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-12 10:06:53
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-12 10:53:23
 * @FilePath: \code practice\nowcoder\hj8.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,int> a;
    int b,c;
    while(cin>>b>>c){
        if(a.find(b)!=a.end()){
            a[b]+=c;
            continue;
        }
        a.insert({b,c});
    }
    
    for(const auto& es :a){
        cout<<es.first<<' '<<es.second<<'\n';
    }
    

    return 0;
}