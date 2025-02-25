#include <iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

typedef long long L;
typedef unsigned long long UL;

int n,m;//点数和边数
int Grade[20][20];//邻接矩阵
struct G{
    int to,nxt;
}a[405];
int head[20],_cnt;//邻接表

inline void AddEdge(int x,int y) {a[++_cnt].to=y,a[_cnt].nxt=head[x];head[x]=_cnt;}
void ConvertList() {
    for(int i=1;i<=n;++i) {
        for(int j=1;j<=n;++j) {
            if(Grade[i][j]==1) AddEdge(i,j);
        }
    }
}

void ConvertMatrix() {
    for(int i=1;i<=n;++i) {
        for(int j=head[i];j;j=a[j].nxt) {
            Grade[i][a[i].to]=1;
        }
    }
}

int dfn[20],bfn[20];//dfs,bfs编号
vector<pair<int,int> >dft,bft;//dfs,bfs树
bool vis[20];//访问标记
int cnt;

void dfs(int x) {
    vis[x]=1;
    dfn[x]=++cnt;
    for(int i=head[x];i;i=a[i].nxt) {
        int y=a[i].to;
        if(!vis[y]) {
            dft.push_back(make_pair(x,y));
            dfs(y);
        }
    }
}

void bfs() {
    vis[1]=1;
    queue<int> q;
    q.push(1);
    while(!q.empty()) {
        int x=q.front();
        bfn[x]=++_cnt;
        q.pop();
        for(int i=head[x];i;i=a[i].nxt) {
            int y=a[i].to;
            if(!vis[y]) {
                vis[y]=1;
                q.push(y);
                bft.push_back(make_pair(x,y));
            }
        }
    }
}

int in[20],out[20],degree[20];

void getdegree() {
    for(int i=1;i<=n;++i) {
        for(int j=head[i];j;j=a[j].nxt) {
            in[a[j].to]++;
            out[i]++;
        }
    }
    for(int i=1;i<=n;++i) degree[i]=in[i]+out[i];
}
int main(){
    freopen("graph.in","r",stdin);
    freopen("graph.out","w",stdout);

    cin>>n>>m;

    for(int i=1;i<=m;++i) {
        int p,q;
        cin>>p>>q;
        Grade[p][q]=1;
    }

    cout<<"The adjacency matrix is: "<<'\n';
    for(int i=1;i<=n;++i) {
        for(int j=1;j<=n;++j) {
            cout<<Grade[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';

    ConvertList();

    memset(Grade,0,sizeof Grade);
    ConvertMatrix();

    cout<<"The adjacency matrix after translation is: "<<'\n';
    for(int i=1;i<=n;++i) {
        for(int j=1;j<=n;++j) {
            cout<<Grade[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';

    memset(vis,0,sizeof vis);
    cnt=0;
    dfs(1);
    cout<<"The number of dfs are: "<<'\n';
    for(int i=1;i<=n;++i) cout<<i<<"->"<<dfn[i]<<'\n';
    cout<<"Spanning tree numbers are:"<<'\n';
    for(auto it=dft.begin();it!=dft.end();++it) cout<<it->first<<' '<<it->second<<'\n';
    cout<<'\n';

    memset(vis,0,sizeof vis);
    cnt=0;
    bfs();
    cout<<"The number of bfs are"<<'\n';
    for(int i=1;i<=n;++i) cout<<i<<"->"<<bfn[i]<<'\n';
    cout<<"Spanning tree numbers are:"<<'\n';
    for(auto it=bft.begin();it!=bft.end();++it) cout<<it->first<<' '<<it->second<<'\n';
    cout<<'\n';

    getdegree();
    for(int i=1;i<=n;++i) {
        cout<<"The indegree of i is "<<in[i]
        <<",the out degree of i is "<<out[i]
        <<",the total degree of i is "<<degree[i]<<'\n';
    }

    return 0;
}