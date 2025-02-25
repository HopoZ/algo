/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-29 07:08:51
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-29 07:55:58
 * @FilePath: \code practice\nowcoder\simple\hj56.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

bool isPerfect(int num){
    int numMirror =1;
    for(int i =2;i<sqrt(num);i++){
        if(num%i==0){
            numMirror+=i+num/i;
        }
    }
    return numMirror==num;
}

int main() {
    int n;
    cin>>n;
    int sum =0;
    for(int i =2;i<=n;i++){
        if(isPerfect(i)){
            sum++;
        }
    }
    cout<<sum<<'\n';
    return 0;
}