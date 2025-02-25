/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-14 08:22:18
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-14 08:49:14
 * @FilePath: \code practice\nowcoder\hj13.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    string word[1000];
    int n =0;
    while (cin>>word[n++]);
    for(int i =n-2;i>=0;i--){ //IMP n-2而不是n-1,奇怪的数组索引
        cout<<word[i]<<' ';
    }
    
    
    return 0;
}