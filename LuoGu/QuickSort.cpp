/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2023-10-23 01:09:13
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-04-23 10:41:59
 * @FilePath: \code practice\LuoGu\QuickSort.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include <bits/stdc++.h>

using namespace std;

int partitionArr(int* a, int left, int right) {
  int mid = (left + right) / 2;
  swap(a[mid], a[left]);
  int pivot =a[left];
  
  int i = left + 1, j = right;
  while (i<j) {
    while (i <= j && a[i] <= pivot) {
      i++;
    }
    while (i <= j && a[j] > pivot) {
      j--;
    }

    if (i < j) {
      swap(a[i++], a[j--]);
    }
  }
  if(a[j]>pivot) swap(a[left],a[j-1]);
  else swap(a[left],a[j]);

  return j;
}
void quickSort(int* a, int left, int right) {
  if (left >= right) {
    return;
  }
  int pivot = partitionArr(a, left, right);
  quickSort(a, left, pivot - 1);
  quickSort(a, pivot + 1, right);
}
int main() {
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int n;
  cin >> n;
  int a[100001];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  quickSort(a, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' ';
  }
  return 0;
}