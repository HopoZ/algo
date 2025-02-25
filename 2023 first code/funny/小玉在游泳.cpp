/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-06-18 18:59:11
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-06-21 14:39:13
 * @FilePath: \LuoGu\tree.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved.
 */
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int l, n;
    cin >> l >> n;
    int* num = new int[l + 1];
    l++;
    fill(num, num + l + 1, 1);
    int start, end;
    while (n--) {
        cin >> start >> end;
        fill(num + start, num + end + 1, 0);
    }

    int cnt = 0;
    if (num[0] == 1) cnt++;
    while (l--) {
        if (num[l] == 1) cnt++;
    }

    cout << cnt;
    delete[] num;
}

