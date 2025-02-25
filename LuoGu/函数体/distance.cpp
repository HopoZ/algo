/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-30 14:08:24
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-30 14:37:59
 * @FilePath: \LuoGu\distance.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;
double Dis(double x1, double x2, double y1, double y2){
    return sqrt((x2-x1)*(x2-x1) +(y2-y1)*(y2-y1));
}


int main() {
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double z1 =Dis(x1,x2,y1,y2);
    double z2 =Dis(x1,x3,y1,y3);
    double z3 =Dis(x2,x3,y2,y3);
    cout<<fixed<<setprecision(2)<<z1+z2+z3;
    return 0;
}