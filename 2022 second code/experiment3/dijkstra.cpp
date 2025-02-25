#include<iostream>
#include<cstring>
using namespace std;

const int inf =0x3f3f3f3f;
const int maxn =100;
int n,m;//the numbers of vertex and edge 
int graph[maxn][maxn];
int start;
struct mark{
    int v;
    int p;
    int st;
}; //Record the status of each point
struct mark list[maxn];
//Implement record table recursively
void CreatList(){
    int min =inf;
    int id =0;
    int cnt =0;
    for(int i =0;i<m;++i){
        if(list[i].st!=1){
            if(min>list[i].v){
                min =list[i].v;
                id =i;
            }
            ++cnt;
        }
    }
    if(cnt==0)
        return;
    list[id].st =1;
    for(int j =0;j<m;++j){
        if(graph[id][j]<inf){
            if(list[j].v>graph[id][j]+list[id].v){
                list[j].v =graph[id][j]+list[id].v;
                list[j].p =id;
            }
        }
    }
    CreatList();
}
//Print the shortest path from the starting point 
//to each point and the sum of the path weights
void print(int i){
    int v =list[i].v;
    int id =i;
    for(;;){
        if(id!=0)
            cout<<id<<" - ";
        else
            cout<<id;
        id =list[id].p;
        if(id==-1)
            break;
    }
    cout<<'\n';
    cout<<"value: "<<v<<'\n';
}
//dijkstra function
void dijkstra(){
    for (int i =0; i<m;++i){
        list[i].st =0;
        list[i].v =maxn;
        list[i].p =-1;
	}//initialize the list
    list[start].v =0;
    CreatList();
}
int main(){
    freopen("graph.in","r",stdin);
    freopen("graph.out","w",stdout);    
    cin>>n>>m;
        memset(graph,inf,sizeof(graph));
        int u,v,w;
        for(int i =0;i<m;++i){
            cin>>u>>v>>w;
            graph[u][v] =w;
        }
        cin>>start;
        dijkstra();
        for(int i =0;i<n;++i){
        print(i);
    }
    return 0;
}