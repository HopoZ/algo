#include<iostream>
using namespace std;

int m[109];
int maxn=0;

int sort(){
    for(int i=1;i<=100;i++)
    {
        if(maxn<m[i]) maxn=i;
    }
    return maxn;
}
int todo(int n,int i){
    while(n>0 && n!=1)
    {
        if(n%2==0)
        {
            m[i]++;
             n/=2;
             if(maxn==i) cout<<n<<' ';
        }
        else 
        {
            m[i]++;
            n=3*n+1;
            if(maxn==i) cout<<n<<' ';
        }
    }
     if(n==1) return 1;
     else return 0;
}
int main(){
    for(int i=1;i<=100;i++)
    {
        if(todo(i,i))
        cout<<"yes ";
        else cout<<"no ";
    }
    cout<<'\n';
    int n=sort();
    cout<<"The longest operation of 3n+1 is "<<n<<' ';
    todo(n,n);
}