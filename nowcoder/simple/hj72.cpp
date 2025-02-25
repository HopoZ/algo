/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-04-03 13:09:25
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-04-03 13:15:22
 * @FilePath: \code practice\nowcoder\simple\hj72.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i =0;i<=20;i++){
        for(int j =0;j<=(100-5*i)/3;j++){
            for(int k=0;k<=3*(100-5*i-3*j);k++){
                if(5*i+3*j+k*1.0/3==100 && i+j+k==100){
                    cout<<i<<' '<<j<<' '<<k<<'\n';
                }
            }
        }
    }
    return 0;
}