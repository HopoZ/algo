/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-04-05 16:07:58
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-04-05 16:32:33
 * @FilePath: \code practice\nowcoder\simple\hj73.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int months[13]={29,31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day;
    int res =0;
    cin>>year>>month>>day;
    if(year%4==0 && year%100!=0 || year%400==0){
        months[2]=months[0];
    }
    for(int i =1;i<month;i++){
        res+=months[i];
    }
    res+=day;
    cout<<res<<'\n';
    return 0;
}