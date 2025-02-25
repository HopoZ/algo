#include<iostream>
using namespace std;

void insertion_sort(int a[],int len){
    int i,j,temp;
    for( i=0;i<len;i++)
    {
         temp=a[i];
        for( j=i;j>0 && a[j-1]>temp;j--)
            a[j]=a[j-1];
         a[j]=temp;
    }
}
int main(){
    int a[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int)sizeof(a) / sizeof(*a);
    insertion_sort(a,len);
    for (int i = 0; i < len; i++)
     cout<<a[i]<<" ";
    return 0;
}