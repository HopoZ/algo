/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-02 00:42:23
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-02 16:59:25
 * @FilePath: \LuoGu\light.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
int square[109][109];
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    int x[26];
    int y[26];
    int o[26];
    int p[26];
    for(int i =0;i<m;i++){
        cin>>x[i]>>y[i];
    }
    for(int i =0;i<k;i++){
        cin>>o[i]>>p[i];
    }

    for(int i =0;i<m;i++){
        for(int j =-2;j<=2;j++){
            square[(x[i]+j)>=0 ? x[i]+j : x[i]][y[i]] =1;
            square[x[i]][y[i]+j>=0 ? y[i]+j : y[i]] =1;
        }
        square[x[i]-1>=0 ? x[i]-1 : x[i]][y[i]-1>=0 ? y[i]-1 : y[i]] =1;
        square[x[i]-1>=0 ? x[i]-1 : x[i]][y[i]+1] =1;
        square[x[i]+1][y[i]-1>=0 ? y[i]-1 : y[i]] =1;
        square[x[i]+1][y[i]+1] =1;
    }
    for(int i =0;i<k;i++){
        for(int j =-2;j<=2;j++){
            for(int q =-2;q<=2;q++){
                square[o[i]+j][p[i]+q] =1;
            }
        }
    }
    int cnt =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(!square[i+1][j+1])  cnt++;
        }
    }
    cout<<cnt;
    return 0;
}