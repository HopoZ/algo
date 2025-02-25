/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-08-25 23:55:41
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-08-26 01:09:34
 * @FilePath: \LuoGu\数组-下\snake.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

    int nums[10][10];
int main() {
    int n;
    cin>>n;
    int direct =3;// 0 down 1 left 2 up 3 right 
    
    int i =0,j =0;
    for(int k =1;k<=n*n;k++){
        nums[i][j] =k;
        switch (direct)
        {
        case 0:
            if(i==n-1 || nums[i+1][j]!=0){
                direct =(direct+1)%4;
                j--;
                break;
            }
            i++;
            break;
        case 1:
            if(j==0 || nums[i][j-1]!=0){
                direct =(direct+1)%4;
                i--;
                break;
            }
            j--;
            break;
        case 2:
            if(i==0 || nums[i-1][j]!=0){
                direct =(direct+1)%4;
                j++;
                break;
            }
            i--;
            break;
        case 3:
            if(j==n-1 || nums[i][j+1]!=0){
                direct =(direct+1)%4;
                i++;
                break;
            }
            j++;
            break;
        default:
            break;
        }
    }
            // cout<<setw(3);//BUG 为什么不会对全局生效
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<setw(3)<<nums[i][j];
        }
        cout<<'\n';
    }
    return 0;
}   