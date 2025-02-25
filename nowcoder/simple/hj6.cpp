/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-10 21:00:55
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-10 22:05:57
 * @FilePath: \code practice\nowcoder\hj6.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
//迭代法或递归法
#include<bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cin>>num;
    if(num==1){
        cout<<1;
        return 0;
    }
    for(int i =2;i<=sqrt(num);i++){
        while (num%i==0)//IMP 所有的质数前面全部除掉，后续就不会有合因子
        {
            cout<<i<<' ';
            num/=i;
        }
        
    }
    if(num!=1){
        cout<<num;
    }
    return 0;

}