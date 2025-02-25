/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-08 16:08:54
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-08 16:18:40
 * @FilePath: \code practice\nowcoder\hj1.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string st;
    getline(cin,st);
    int num = 0;
    for(int i = st.length()-1;i>=0;i--){
        if(st[i]==' ') break;
        num++;
    }
    cout<<num;
}