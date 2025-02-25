/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-07-01 20:44:18
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-07-09 13:39:05
 * @FilePath: \LuoGu\cutCube.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("1.in","r",stdin);


    int w,x,h;
    cin>>w>>x>>h;
    int cube[21][21][21];//直接cube[w][x][h]了。乐
     for(int i =1;i<=w;i++){
        for(int j =1;j<=x;j++){
            for(int k =1;k<=h;k++){
                cube[i][j][k] =1;
            }
        }
    }
    
    int q;
    cin>>q;
    int x1,y1,z1,x2,y2,z2;
    while(q--){
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for(int i=x1;i<=x2;i++){
            for(int j =y1;j<=y2;j++){
                for(int k =z1;k<=z2;k++){
                    cube[i][j][k] =0;
                }
            }
        }
    }
    

    int sum =0;
    for(int i =1;i<=w;i++){
        for(int j =1;j<=x;j++){
            for(int k =1;k<=h;k++){
                if(cube[i][j][k]) sum++;
            }
        }
    }
    cout<<sum;

//TODO 太搞了，一小时一个代码也没写完
//为什么和答案差5个点，太烦了，也不是边界判断失误吧     乐死，他下标从1开始，我一直从0开始
}