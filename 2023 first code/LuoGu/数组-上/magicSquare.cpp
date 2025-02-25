/*** 
 * @Author: entelechy
 * @Date: 2023-07-20 18:38:36
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-08-17 21:03:05
 * @FilePath: \LuoGu\magicSquare.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
int num[39][39];

int main(){
    int N;
    cin>>N;
    // int **num =new *int[N];
    // for(int i =0;i<N;i++){
    //     int *num[i] =new int[N];
    // }
    // 这种方法不好初始化，不用了
    num[0][N/2] =1;
    int preRow=0,preCol=N/2;

    for(int i=2;i<=N*N;i++){
        if(preRow==0 && preCol!=N-1){
            preRow=N-1;
            preCol=preCol+1;
            num[preRow][preCol] =i;
        }else if(preRow!=0 && preCol==N-1){
            preRow =preRow-1;
            preCol=0;
            num[preRow][preCol]=i;
        }else if(preRow==0 && preCol==N-1){
            preRow =preRow+1;
            num[preRow][preCol]=i;
        }else{
            if(num[preRow-1][preCol+1]==0){
                preRow =preRow-1;
                preCol =preCol+1;
                num[preRow][preCol] =i;
            }else{
                preRow =preRow+1;
                num[preRow][preCol] =i;
            }
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<num[i][j]<<' ';
        }
        cout<<'\n';
    }
}