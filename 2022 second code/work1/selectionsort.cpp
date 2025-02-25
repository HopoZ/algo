#include<iostream>
using namespace std;
void selection_sort(int a[], int len) {
    int i,j,temp;
    for(i=0;i<len-1;i++)
    {
        int min=i;
        for(j=i+1;j<len;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
int main(){
    int a[]={22,34,3,32,82,55,89,50,37,5,64,35,9,70};
    int len=(int)sizeof(a)/sizeof(*a);
    selection_sort(a,len);
    int i;
    for(i=0;i<len;i++)
    cout<<a[i]<<" ";
    return 0;
}
