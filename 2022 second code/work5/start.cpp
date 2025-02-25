#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> arr(1024);

int main(){
    srand(7);
    freopen("1.in","w",stdout);
    cout<<1024<<'\n';
     for(int i =0;i<1024;++i){
        arr[i] =2*i+1;
    }
    for(int i =0;i<1024;++i){
        cout<<arr[i]<<'\n';
    }
    freopen("2.in","w",stdout);
    cout<<1024<<'\n';
    random_shuffle(arr.begin(),arr.end());
    for(int i =0;i<1024;++i){
        cout<<arr[i]<<'\n';
    }
}