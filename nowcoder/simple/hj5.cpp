/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2024-03-10 16:43:01
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2024-03-10 20:59:51
 * @FilePath: \code practice\nowcoder\hj5.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

int main() {
        string str;
        cin >> str;
        int num = 0;
        int factor = 1;
        for (int i = str.length()-1; i >= 2; i--) {
            if (str[i] >= '0' && str[i] <= '9') {
                num += (str[i] - '0') * factor;
                factor *= 16;
            } else {
                num += (str[i] - 'A'+10) * factor;
                factor *= 16;
            }
        }
        cout << num;
        return 0;
}