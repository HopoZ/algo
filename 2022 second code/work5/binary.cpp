#include<iostream>
using namespace std;

int arr[1100];
int length;

int BinarySearch(int arr[],int n,int key){
    int l =0,r=n-1;
    int mid;
    while(l<=r){
        length++;
        mid =(l+r)/2;
        if(arr[mid]<key)
            l =mid+1;
        else if(arr[mid]>key)
            r =mid-1;
        else return mid;
    }
    return -1;
}
int main(){
    freopen("1.out","r",stdin);
    int i =0;
    while(cin>>arr[i++]);
    cout<<BinarySearch(arr,i,5);
    freopen("data.txt","w",stdout);
    cout<<length;
}