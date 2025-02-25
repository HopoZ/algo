/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-25 10:25:37
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-29 07:51:19
 * @FilePath: \code practice\nowcoder\simple\reference.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;  //待输入的数
    while(cin>>n){
        int count=0;  //计数器
        //遍历从2到n的每一个数，并在下一层for计算是否为完全数
        for(int k=2;k<=n;k++)  
        {
            int sum=1;  //每个数都包含1这个因数
            for(int i=2;i<=k/2;i++) //除以2：根据题干推出的缩小i范围的方法
            {
                if(k%i==0)
                    sum=sum+i;
            }
            if(k==sum)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}