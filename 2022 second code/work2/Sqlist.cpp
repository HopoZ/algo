#include<iostream>
using namespace std;

#define maxsize 15
typedef struct {
    int data[maxsize];
    int length;
}Sqlist;
Sqlist L1,L2,L3;

void Output(){
    for(int i=1;i<=L1.length;i++){
        cout<<L1.data[i]<<' ';
    }
    cout<<'\n';
     for(int i=1;i<=L2.length;i++){
        cout<<L2.data[i]<<' ';
    }
    cout<<'\n';
      for(int i=1;i<=L3.length;i++){
        cout<<L3.data[i]<<' ';
    }
    cout<<'\n';
}
void Delete(int p,Sqlist& L){
    int q;
    if(p>L.length || p<1)
        cout<<"position does not exist\n";
    else{
        L.length--;
        for(q=p;q<=L.length;q++)
            L.data[q]=L.data[q+1];
    }
}
void Deletesame(Sqlist& L){
    for(int i=1;i<L.length;i++){
        if(L.data[i]==L.data[i+1]) Delete(i,L);
    }
}
void Reverse(Sqlist& L,int l,int r){
    int i=l,j=r;
    while(i<j){
        swap(L.data[i],L.data[j]);
        i++,j--;
    }
}
void Move(int k,Sqlist& L){
    k%=(L.length);
    if(k==0) k=L.length;
    if(k<0) k=L.length+k;
    Reverse(L,1,k);
    Reverse(L,k+1,L.length);
    Reverse(L,1,L.length);

}
void Insert(int x,int p,Sqlist& L){
    int q;
    if(L.length>=maxsize-1)
    cout<<"list is full\n";
    else if(p>L.length+1 || p<1)
    cout<<"position does not exist\n";
    else{
        for(q=L.length;q>=p;q--)
            L.data[q+1]=L.data[q];
        L.length++;
        L.data[p]=x;
    }
}
void Total(){
    int i=1,j=1,k=1;
    for(int t=1;t<=L1.length+L2.length;t++){
        if(L1.data[i]<=L2.data[j] && i<=L1.length) 
              Insert(L1.data[i++],k++,L3);
        else if(L1.data[i]<=L2.data[j] && i>L1.length) 
             Insert(L2.data[j++],k++,L3);
        else if(L1.data[i]>L2.data[j] && j<=L2.length)
            Insert(L2.data[j++],k++,L3);
        else if(L1.data[i]>L2.data[j] && j>L2.length)
              Insert(L1.data[i++],k++,L3);
    }
}
int main(){
    cout<<"please input L1\n";
    int x,p=1;
    while(cin>>x){
        if(x==-1) break;
        Insert(x,p,L1);
        p++;
    }
    cout<<"please input L2\n";
    p=1;
    while(cin>>x){
        if(x==-1) break;
        Insert(x,p,L2);
        p++;
    }
    
    Output();
    Delete(1,L1);
    Output();
    Deletesame(L2);
    Output();  
    Reverse(L2,1,L2.length);
    Output();  
    Move(3,L2);  
    Output(); 
    Total();
    Output();

}