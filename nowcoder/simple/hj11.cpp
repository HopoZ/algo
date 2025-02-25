/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-13 08:57:07
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-13 09:33:50
 * @FilePath: \code practice\nowcoder\hj11.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin>>a;
    string st =to_string(a);
    string stR ="";
    for(int i =st.length()-1;i>=0;i--){
        stR+=st[i];
    }
    cout<<stR;
    return 0;
}