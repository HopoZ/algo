/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-21 10:14:09
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-21 11:37:04
 * @FilePath: \code practice\nowcoder\simple\hj37.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int matureR =0;
    int half =0;
    int unMatureR =1;
    for(int i =1;i<n;i++){
        matureR +=half;
        half =unMatureR;
        unMatureR =matureR;
    }
    cout<<matureR+unMatureR+half;
    return 0;
}
