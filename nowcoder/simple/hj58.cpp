/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-31 07:58:04
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-31 08:09:28
 * @FilePath: \code practice\nowcoder\simple\hj58.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> num(n);
    for(int i =0;i<n;i++){
        cin>>num[i];
    }

    //冒泡排序
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            int temp;
            if(num[j]>num[j+1]){
                temp =num[j];
                num[j] =num[j+1];
                num[j+1]=temp;
            }
        }
    }

    for(int i =0;i<k;i++){
        cout<<num[i]<<' ';
    }
    return 0;
}