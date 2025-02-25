/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-23 13:30:40
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-07-01 20:51:00
 * @FilePath: \LuoGu\equalPlayer.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;

    int** student =new int*[N];
    for(int i =0;i<N;i++){
        student[i] =new int[3];
    }

    for(int i =0;i<N;i++){
        for(int j =0;j<3;j++){
            cin>>student[i][j];
        }
    }

    int* sum =new int[N];
    for(int i =0;i<N;i++){
        for(int j =0;j<3;j++){
            sum[i]+=student[i][j];
        }
    }

    int cnt =0;
    for(int i =0;i<N;i++){
        for(int j =i+1;j<N;j++){
            int flag =1;
            for(int k =0;k<3;k++){
                if(student[i][k]-student[j][k]>5 || student[i][k]-student[j][k]<-5){
                    flag =0;
                }
            }
            if(sum[i]-sum[j]>10 ||sum[i]-sum[j]<-10){
                flag =0;
            }
            if(flag) cnt++;
        }
    }

    cout<<cnt;
    


     for(int i =0;i<N;i++){
        delete[] student[i];
    }
    delete[] student;
}