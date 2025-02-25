#include <iostream>
using namespace std;
void bubble_sort(int a[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}
int main() {
    int a[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int)sizeof(a) / sizeof(*a);
    bubble_sort(a, len);
    int i;
    for (i = 0; i < len; i++)
    cout<<a[i]<<" ";
    return 0;
}