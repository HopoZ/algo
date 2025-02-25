#include<iostream>
#include<stack>
using namespace std;


struct node{
    struct node* l;
    struct node* r;
    char data;
};
typedef node* BTREE;

BTREE CrtBT(char v){
    BTREE root;
    root = new node;
    root->data=v;
    return root;
}
void AddBT(BTREE &BT){
    BT->l=new node;
    BT->r=new node;
    cout<<"now the parent is "<<BT->data<<'\n';
    cout<<"please input the left son and right son,# for null: ";
    cin>>BT->l->data;
    cin>>BT->r->data;
    if(BT->l->data!='#'){
        AddBT(BT->l);
    }
    if(BT->r->data!='#'){
        AddBT(BT->r);
    }
}
void PreOrder(BTREE BT){
    if(BT!=NULL){
        cout<< BT->data;
        if(BT->data!='#'){
            cout<<'(';
            PreOrder(BT->l);
            PreOrder(BT->r);
            cout<<')';
        }
       
    }
} 
void InOrder(BTREE BT){
    if(BT!=NULL){
        if(BT->data!='#')
        InOrder(BT->l);
        cout<<BT->data;
        if(BT->data!='#')
        InOrder(BT->r);
    }
}
void PostOrder(BTREE BT){
    if(BT!=NULL){
        if(BT->data!='#'){
            PostOrder(BT->l);
            PostOrder(BT->r);
        }
        cout<<BT->data;
    }
}
void PreOrderf(BTREE BT){
    stack<BTREE> s;
    BTREE n=new node;
    s.emplace(BT);
    while(!s.empty()){
        n=s.top();
        s.pop();
        cout<<n->data;
        if(n->data!='#'){
             s.emplace(n->r);
             s.emplace(n->l);
        }
    }
}
void PostOrderf(BTREE BT){
    stack<BTREE> s;
    BTREE n=new node;
    n=BT;
    char array[100];
    int cnt=0;
    s.emplace(n);
    while(!s.empty()){
        n=s.top();
        s.pop();
        array[cnt++]=n->data;
        if(n->data!='#'){
             s.emplace(n->l);
             s.emplace(n->r);
        }
    }
    for(int i=cnt-1;i>=0;i--){
        cout<<array[i];
    }
}
int main(){
    cout<<"please input the root value: ";
    char v;
    cin>>v;
    BTREE root=CrtBT(v);
    AddBT(root);
    PreOrder(root);
    cout<<'\n';
    InOrder(root);
    cout<<'\n';
    PostOrder(root);
    cout<<'\n';
    PreOrderf(root);
    cout<<'\n';
    PostOrderf(root);
    cout<<'\n';
}