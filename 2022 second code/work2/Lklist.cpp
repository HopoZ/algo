#include<iostream>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
}*Lklist,*position;
Lklist L1,L2,L3;

void Output(){
    position p=L1;
    while(p->next!=NULL){
        cout<<p->next->data<<' ';
        p=p->next;
    }
    cout<<'\n';
    p=L2;
    while(p->next!=NULL){
        cout<<p->next->data<<' ';
        p=p->next;
    }
    cout<<'\n';
    p=L3;
    while(p->next!=NULL){
        cout<<p->next->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
void Init(){
    L1=new node;
    L1->next=NULL;
    L2=new node;
    L2->next=NULL;
    L3=new node;
    L3->next=NULL;
}
void Insert(int x,position p){
    position temp;
    temp=p->next;
    p->next=new node;
    p->next->data=x;
    p->next->next=temp;
}
void Reverse(Lklist L,int l,int r){
    int num[50];
    position p=L;
    int i=l;
    while(--i) 
        p=p->next;
    for(int i=l;i<=r;++i){
        num[i]=p->next->data;
        p=p->next;
    }
    p=L;
    i=l;
    while(--i) 
        p=p->next;
    for(int i=0;i<=r-l;++i){
        p->next->data=num[r-i];
        p=p->next;
    }
}
int Length(Lklist L){
    position p=L;
    int i=0;
    while(p->next!=NULL){
        p=p->next;
        i++;
    }
    return i;
}
void Move(int k,Lklist L){
    k%=Length(L);
    if(k==0) 
        return;
    if(k<0) 
        k=Length(L)+k;
    Reverse(L,1,k);
    Reverse(L,k+1,Length(L));
    Reverse(L,1,Length(L));

}
void Delete(int pn,Lklist L){
    position p=L;
    while(--pn){
        p=p->next;
    }
    position q=p->next;
    if(p->next!=NULL){
        q=p->next;
        p->next=q->next;
        delete q;
    }
}
void Deletesame(Lklist L){
    position p=L;
    position q=p->next;

    int i=1;
    while(q!=NULL && q->next!=NULL){
        if(p->next->data==q->next->data) Delete(i,L);
        i++;
        p=p->next;
        q=p->next;
    }
}
void Total(){
    position p=L1;
    position q=L2;
    position t=L3;
    while(p->next!=NULL || q->next!=NULL){
        if(p->next==NULL) {
            Insert(q->next->data,t);
            q=q->next;
            t=t->next;
        }
        else if(q->next==NULL){
            Insert(p->next->data,t);
            p=p->next;
            t=t->next;
        }
        else {
            if(p->next->data <= q->next->data){
                Insert(p->next->data,t);
                p=p->next;
                t=t->next;
            }
            else{
                Insert(q->next->data,t);
                q=q->next;
                t=t->next;
            }
        }
    }
}
int main(){
    Init();
    cout<<"please input L1\n";
    int x;
    position p=L1;
    while(cin>>x){
        if(x==-1) break;
        Insert(x,p);
        p=p->next;
    }
     cout<<"please input L2\n";
    p=L2;
    while(cin>>x){
        if(x==-1) break;
        Insert(x,p);
        p=p->next;
    }

    Output();
    Delete(1,L1);
    Output();
    Deletesame(L2);
    Output();  
    Reverse(L2,1,Length(L2));
    Output();  
    Move(3,L2);  
    Output(); 
    Total();
    Output();

}