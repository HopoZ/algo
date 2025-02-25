/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-18 18:59:11
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-07-01 20:40:16
 * @FilePath: \LuoGu\数组\tree.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int l,n;
    freopen("1.in","r",stdin);
    cin>>l>>n;
    int* num =new int[l+1];
    fill(num,num+l+1,1);
    int start,end;
    while(n--){
        cin>>start>>end;
        fill(num+start,num+end+1,0);
    }

    int cnt =0;
    for(int i =0;i<l+1;i++){
        if(num[i]==1) cnt++;
    }

    cout<<cnt;
    delete[] num;
    // 两个没过,破案了，是因为我搞错l--的顺序了，直接认为出while了
}

