#include<iostream>
using namespace std;

void bs_r(int a[],int n,int i){
    if(i==n-1) return;
    bool e=0;
    for(int j=n-1;j>i;j--)
    {
        if(a[j]<a[j-1])
        {
            swap(a[j],a[j-1]);
            e=1;
        }
    }
    if(!e) return;
    bs_r(a,n,i+1);
}
int main(){
    int a[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int n=sizeof(a)/sizeof(*a);
    bs_r(a,n,0);
    for (int i = 0; i < n; i++)
     cout<<a[i]<<" ";
    return 0;
}