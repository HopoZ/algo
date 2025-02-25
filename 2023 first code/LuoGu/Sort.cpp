/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-06 14:30:52
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-10 19:54:47
 * @FilePath: \LuoGu\Sort.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<iostream>

using namespace std;

void QuickSort(int start,int end,int* num){
    if(start>=end) return;
    swap(num[start],num[rand()%(end-start+1)+start]);
    int pivot =num[start];
    int i =start +1;

    for(int j =start+1;j<=end;j++){
        if(num[j]<pivot){
            swap(num[i],num[j]);
            i++;
        }
    }
    swap(num[i-1],num[start]);
    QuickSort(start,i-2,num);
    QuickSort(i,end,num);
}

int main(){
    int N;
    cin>>N;
    int* num =new int[N];
    for(int i =0;i<N;i++){
        cin>>num[i];
    }

    QuickSort(0,N-1,num);
    for(int i =0;i<N;i++){
        cout<<num[i]<<' ';
    }
}
