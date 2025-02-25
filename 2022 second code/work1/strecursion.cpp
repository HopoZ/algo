#include<iostream>
using namespace std;

void st_r(int a[],int n,int i){
    if(i>=n-1) return;
    int temp,j;
    temp=i;
    for(j=i+1;j<n;j++)
    if(a[j]<a[temp])
        temp=j;
    if(temp!=i)
    {
        int m;
        m=a[temp];
        a[temp]=a[i];
        a[i]=m;
    }
    st_r(a,n,i+1);
}
int main(){
    int a[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int n=sizeof(a)/sizeof(*a);
    st_r(a,n,0);
     for (int i = 0; i < n; i++)
     cout<<a[i]<<" ";
    return 0;
}