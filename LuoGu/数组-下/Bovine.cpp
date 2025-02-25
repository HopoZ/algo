/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-08-25 13:16:06
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-08-25 13:44:36
 * @FilePath: \LuoGu\Bovine.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    int Sums[16000]={0};
    for(int i =1;i<=s1;i++){
        for(int j =1;j<=s2;j++){
            for(int k =1;k<=s3;k++){
                Sums[i+j+k]++;
            }
        }
    }
    int max =3;
    for(int i =4;i<=s1*s2*s3;i++){
        max =Sums[max]>=Sums[i]?max:i;
    }
    cout<<max;
    return 0;
}