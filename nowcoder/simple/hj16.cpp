/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-15 09:15:31
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-15 14:17:12
 * @FilePath: \code practice\nowcoder\hj16.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
struct thing
{
    int value;
    int importance;
    bool isAppendix;
};



int main() {
    int N,m;
    cin>>N>>m;
    vector<vector<int>> dp(m,vector<int>(N,0));//dp[i][j] 前i个物品价格总不超过j的最高总价值
    thing* things =new thing[m];
    for(int i =0;i<m;i++){
        cin>>things[i].value>>things[i].importance>>things[i].isAppendix;
    }
    for(inti = 0;i<m;i++){
        for(int j =0;j<N;j++){
            //HARD 01背包问题
        }
    }

    
    return 0;
}