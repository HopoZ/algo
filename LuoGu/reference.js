/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-10-30 19:38:59
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-11-04 19:35:11
 * @FilePath: \LuoGu\reference.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */
// #include <bits/stdc++.h>

// using namespace std;

// int main() {



function sort(arr, startIndex, endIndex) {
    // 递归结束条件：startIndex大于等于endIndex的时候
    if (startIndex >= endIndex) {
        return;
    }
    // 得到基准元素的位置
    let pivotIndex = partition(arr, startIndex, endIndex);
    sort(arr, startIndex, pivotIndex - 1);
    sort(arr, pivotIndex + 1, endIndex);
}

function partition(arr, startIndex, endIndex) {
    // 选择第一个位置的元素作为基准元素
    let pivot = arr[startIndex];
    let left = startIndex;
    let right = endIndex;
    let index = startIndex;

    // 外循环在左右指针重合或者交错的时候结束
    while (right > left) {
        // right指针从右向左进行比较
        while (right > left) {
            if (arr[right] < pivot) {
                arr[left] = arr[right];
                index = right;
                left++;
                break;
            }
            right--;
        }
        // left指针从左向右进行比较
        while (right > left) {
            if (arr[left] > pivot) {
                arr[right] = arr[left];
                index = left;
                right--;
                break;
            }
            left++;
        }
    }
    arr[index] = pivot;
    return index;
}

let arr = [4, 5, 8, 1, 7, 2, 6, 3];
sort(arr, 0, arr.length - 1);
console.log(arr);



        
// }