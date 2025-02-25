#include<iostream>
using namespace std;

const int inf =0x3f3f3f3f;
const int maxn =100;
int graph[maxn][maxn];
int n,m;//the numbers of vertex and edge 
int start;
int pm[maxn][maxn];//pathmatrix.Record the predecessor point of the minimum path of the corresponding point
int sp[maxn][maxn];//shortpath.Record the minimum path value between vertices
void Floyd(){
    int v,w,k;
    for(v =0;v<n;++v){
        for(w =0;w<n;++w){
            sp[v][w] =graph[v][w];
            pm[v][w] =w;
        }
    }

    for(k =0;k<n;++k){
        for(v =0;v<n;++v){
            for(w =0;w<n;++w){
                if(sp[v][w]>sp[v][k]+sp[k][w]){
                    sp[v][w] =sp[v][k]+sp[k][w];
                    pm[v][w] =pm[v][k];
                }
            }
        }
    }
    for(int i =0;i<n;++i){
        for(int j =0;j<n;++j){
            if(i==j) continue;
            cout<<"\n" <<i <<" -> " <<j <<" The minimum path is:" <<sp[i][j] <<'\n';
            k =pm[i][j];
            cout<<"path:"<<i;
            while(k!=j){
                cout<<"-> " <<k;
                k =pm[k][j];
            }
            cout<<"-> " <<j<<'\n';
        }
    }
}
int main(){
    freopen("graph.in","r",stdin);
    freopen("graph.out","w",stdout);    
    cin>>n>>m;
    for(int i =0;i<n;++i)
        for(int j =0;j<m;++j){
            if(i==j)
                graph[i][j] =0;
            else 
                graph[i][j] =inf;
        }
    int u,v,w;
        for(int i =0;i<m;++i){
            cin>>u>>v>>w;
            graph[u][v] =w;
        }
    Floyd();
}