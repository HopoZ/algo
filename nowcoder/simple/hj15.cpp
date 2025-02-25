/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-14 08:22:37
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-14 09:33:45
 * @FilePath: \code practice\nowcoder\hj15.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    bitset<sizeof(int)*8> binary(n);
    string st = binary.to_string();
    int num =0;
    for(auto e :st){
        if(e=='1'){
            num++;
        }
    }
    cout<<num;
    return 0;
}