#include<iostream>
using namespace std;


typedef struct node{
    int v;//value
    struct node *l;//left child
    struct node *r;//right child
}BstNode,*pBstNode;
int data[1100];
int length;


pBstNode Search(pBstNode& root,int v);
void Insert(pBstNode& root,int v);
void CreateBstTree(pBstNode& root,int* data,int n);
bool Delete(pBstNode& root,int v);
void InOrder(pBstNode& now);
int main(){
    freopen("2.in","r",stdin);
    freopen("1.out","w",stdout);
    pBstNode root =NULL;
    int n;
    cin>>n;
    for(int i =0;i<n;++i)
        cin>>data[i];
    CreateBstTree(root,data,n);
    InOrder(root);
    cout<<'\n';
    Delete(root,7);
    InOrder(root);
    freopen("data.txt","w",stdout);
    Search(root,1003);
    cout<<length;
}


pBstNode Search(pBstNode& root,int v){
    length++;
    if(!root) 
        return NULL;
    else if(v < root->v)
        return Search(root->l,v);
    else if(v > root->v)
        return Search(root->r,v);
    return root;
}
void Insert(pBstNode& node,int v){
    if(node==NULL){
        // cout<<v<<'\n';
        node =new(BstNode);
        node->v =v;
        node->l =NULL;
        node->r =NULL;
        return;
    }
    if(node->v < v){
        Insert(node->r,v);
        return;
    }
    if(node->v > v){
        Insert(node->l,v);
        return;
    }
    return;
    
}
void CreateBstTree(pBstNode& node,int* data,int n){
    for(int i =0;i<n;++i){
        Insert(node,data[i]);
    }
    return;
}
void InOrder(pBstNode& now){
    if(!now) return;
    if(now->l!=NULL)
        InOrder(now->l);
    if(now!=NULL);
        cout<<now->v<<' ';
    if(now->r!=NULL)
        InOrder(now->r);
    
} 
bool Delete(pBstNode& root,int v){
    if(root==NULL)
        return false;
    if(v < root->v)
        return Delete(root->l,v);
    else if(v > root->v)
        return Delete(root->r,v);
    else{
        if(root->l && root->r){
            pBstNode q =root->r;
            while(q->l)
                q =q->l;
            root->v =q->v;
            Delete(root->r,root->v);
        }
        else{
            pBstNode p =root;
            if(root->l)
                root =root->l;
            else 
                root =root->r;
            delete p;
        }
    }
    return true;
}