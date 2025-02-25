/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-21 22:08:27
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-22 10:42:19
 * @FilePath: \code practice\nowcoder\simple\hj51.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

struct ListNode
{
    int m_nKey;
    ListNode* m_pNext;
};

int main() {
    int n;
    while(cin>>n){
    int  k;
    ListNode* pStart = new ListNode();
    ListNode* p = pStart;
    for (int i = 0; i < n; i++) {
        cin >> p->m_nKey;
        p->m_pNext = new ListNode();
        p = p->m_pNext;
    }
    cin>>k;
    ListNode* ans = pStart;
    for (int i = 0; i < n - k; i++) {
        ans = ans->m_pNext;
    }
    cout << ans->m_nKey<<'\n';
    }
  
    return 0;
}