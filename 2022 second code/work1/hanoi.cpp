#include<iostream>
using namespace std;

void HanoiMove(int n,char x, char y,char z){
    if(n<1) return;
    if(n==1)
    cout<<" move "<<n<<" from "<<x<<" to "<<z<<'\n';
    else
    {
        HanoiMove(n-1,x,z,y);
        cout<<" move "<<n<<" from "<<x<<" to "<<z<<'\n';
        HanoiMove(n-1,y,x,z);
    }
}
int main(){
    HanoiMove(3,'A','B','C');
    return 0;
}