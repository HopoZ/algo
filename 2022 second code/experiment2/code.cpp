/*
 * @Author: hopo 
 * @Date: 2022-10-24 23:53:17 
 * @Last Modified by: hopo
 * @Last Modified time: 2022-10-25 01:23:20
 */
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

#define N 1000
#define M 2*N-1
#define MAX 99999
typedef struct {
    int w,p,l,r;
    char ch;
    string zcode;
}HTnode,HuffmanTree[M+1];
HuffmanTree ht;
int beforenum,afternum;

//找到两个最小的节点
void Select(int n,int& s1,int& s2){
    int i,min1=MAX,min2=MAX;
    s1=s2=0;
    for(i=1;i<=n;i++){
        if(ht[i].p==0){
          if(ht[i].w<min1){
            min2=min1;
            s2=s1;
            min1=ht[i].w;
            s1=i;
          }
          else if(ht[i].w<min2){
            min2=ht[i].w;
            s2=i;
          }
        }
    }
}
//生成霍夫曼树
void CrtHuffmanTree(unordered_map<char,int> &w,int n){
    int i=1;
    for(auto e :w){
        ht[i].ch=e.first;
        ht[i].w=e.second;
        ht[i].p=ht[i].l=ht[i].r=0;
        i++;
    }

    int s1,s2;
    for(i=n+1;i<=2*n-1;i++){
        Select(i-1,s1,s2);
        ht[i].w=ht[s1].w+ht[s2].w;
        ht[s1].p=ht[s2].p=i;
        ht[i].l=s1;
        ht[i].r=s2;
    }
}
//显示霍夫曼编码
void HuffmanCode(int n,unordered_map<char,int> &w){
    vector<char> ch(n);
    int i=1;
    for(unordered_map<char,int>::iterator e=w.begin();e!=w.end();e++){
        int st=n-1,c=i,p=ht[i].p;
        while(p!=0){
            if(ht[p].l==c)
                ch[st]='0';
            else
                ch[st]='1'; 
            c=p;
            p=ht[p].p;
            --st;
        }
        cout<<"The code of "<<ht[i].ch<<' ';
        for(int j=0;j<n;j++)
             if(ch[j]=='0' || ch[j]=='1'){
                cout<<ch[j];
                 ht[i].zcode+=ch[j];
             }
        cout<<'\n';
        i++;
        for(int j=0;j<n;j++)
            ch[j]=' ';
    }
}
int main(){
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    vector<char> str;
    unordered_map<char,int> s;
    char ch;
    while(cin.get(ch)){
        str.push_back(ch);
        beforenum+=8;
    }
    cin.clear();
   for(auto e:str){
         auto it=s.find(e);
         if(it!=s.end()){
            s[e]++;
         }
         else{
            s.emplace(e,1);
         }
    }
    CrtHuffmanTree(s,s.size());
    cout<<"Huffman tree node values are:\n";
    for(int i=1;i<=s.size();i++)
        cout<<ht[i].ch<<' '<<ht[i].w<<' ';
    cout<<'\n';
    HuffmanCode(s.size(),s);
    freopen("zip.out","w",stdout);
    for(auto e:str){
        for(int i=1;i<=s.size();i++){
            if(e==ht[i].ch){
                cout<<ht[i].zcode;
                afternum+=ht[i].zcode.size();
            }
        }
    }
    freopen("1.out","a",stdout);
    cout<<beforenum<<' '<<afternum<<' ';
    cout<<"The compression ratio is "<<afternum/(beforenum*1.0)<<endl;
    freopen("unzip.out","w",stdout);
    freopen("zip.out","r",stdin);
    string htcode;
    while(cin.get(ch)){
        htcode+=ch;
        for(int i=1;i<=s.size();i++){
            if(htcode==ht[i].zcode){
                cout<<ht[i].ch;
                htcode="";
            }
        }
    }

}