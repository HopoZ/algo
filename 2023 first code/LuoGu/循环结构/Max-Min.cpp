#include<bits/stdc++.h>

using namespace std;

int main(){
    int max =-0x3f3f3f3f;
    int min =0x3f3f3f3f;
    int num[100];
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>num[i];
    }
     for(int i =0;i<n;i++){
        if(max<num[i]) max =num[i];
        if(min>num[i]) min =num[i];
    }
    cout<<max-min;
}