#include<iostream>
using namespace std;

void it_r(int a[],int n,int i){
    if(i>=n) return;
    int temp=a[i],j;
    for(j=i;j>0 && a[j-1]>temp;j--)
    a[j]=a[j-1];
    a[j]=temp;
    it_r(a,n,i+1);
}
int main(){
     int a[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int n=sizeof(a)/sizeof(*a);
    it_r(a,n,0);
     for (int i = 0; i < n; i++)
     cout<<a[i]<<" ";
    return 0;
}