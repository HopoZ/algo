/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-20 16:15:56
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-20 16:32:41
 * @FilePath: \code practice\nowcoder\hj35.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i;j++){
            cout<<(i+j+1)*(i+j)/2+j+1<<' ';
        }
        cout<<'\n';
    }
    return 0;
}