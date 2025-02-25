#include<iostream>
#include<ctime>
#include<cstdlib>
#include<stack>
#include<vector>
#include<queue>
#define M 15
using namespace std;

int maze[M][M];//迷宫基础
bool st[M][M];//状态函数
bool vis[M][M];//状态函数
stack<int> r,c;//栈结构
const int dx[8]={1,1,1,-1,-1,-1,0,0};
const int dy[8]={0,1,-1,0,1,-1,1,-1};//优先搜索用到的数据
int l,flag;//状态标签
pair<int,int> node[M*M];//路径存储

//初始化迷宫参数
void Init(){
    r.push(1);
    c.push(1);
    srand(time(0));
}
//创造迷宫的辅助函数
int DirRand(){
    vector<int> dirlist;
    int result=0;
    int row=r.top(),col=c.top();
    if(row-2>0 && !maze[row-2][col]) dirlist.push_back(0);
    if(row+2<M-1 && !maze[row+2][col]) dirlist.push_back(1);
    if(col-2>0 && !maze[row][col-2]) dirlist.push_back(2);
    if(col+2<M-1 && !maze[row][col+2]) dirlist.push_back(3);
    if(dirlist.size()==0) result=-1;
    else result=dirlist[rand()%dirlist.size()];
    return result;
}
//生成迷宫
void GenMaze(){
    while(!r.empty() && !c.empty()){
        int d=DirRand();
        int row=r.top(),col=c.top();
        if(d!=-1)
        {
            if(d==0)
            {
                maze[row-2][col]=maze[row-1][col]=true;
                r.push(row-2);
                c.push(col);
            }
            else if(d==1)
            {
                maze[row+2][col]=maze[row+1][col]=true;
                 r.push(row+2);
                c.push(col);
            }
             else if(d==2)
            {
                maze[row][col-2]=maze[row][col-1]=true;
                 r.push(row);
                c.push(col-2);
            }
             else if(d==3)
            {
                maze[row][col+2]=maze[row][col+1]=true;
                 r.push(row);
                c.push(col+2);
            }
           
        } 
        else
            {
                r.pop();
                c.pop();
            }
    }
}
//显示迷宫
void OutMaze(){
    for(int i=0;i<M;i++)
    {
    for(int j=0;j<M;j++)
    {
        if(maze[i][j]==1)
        cout<<' ';
        else if(maze[i][j]==-1) cout<<'.';
        else if(!maze[i][j]) cout<<'#';
        else cout<<' ';
       
    }
        cout<<'\n';
    }
}
//清除路径标记
void SetMaze(){
       for(int i=0;i<M;i++)
    for(int j=0;j<M;j++)
    {
       if(maze[i][j]==0) continue;
       else maze[i][j]=1;

    }
}
//广度优先搜索找最短路径
void bfs(int i,int j){
    queue<pair<int,int>> q;
    q.emplace(i,j);
    maze[1][1]=1;
    st[1][1]=1;
    while(!q.empty())
    {
        i=q.front().first,j=q.front().second;
        q.pop();
     for(int in=0;in<8;++in)
     {
        int ni=i+dx[in],nj=j+dy[in];
        if(ni>=0 && ni<M && nj>=0 && nj<M && maze[ni][nj]==1 && st[ni][nj]==0)
        {
         q.emplace(ni,nj);
         maze[ni][nj]=maze[i][j]+1;
         if(ni==14 && nj==14) return ;
         st[ni][nj]=1;
        }
     }
    }

}
//显示最短路径
void OutMazebfs(){
    int i=13,j=13;
    int m=maze[i][j];
    maze[i][j]=-1;
    while(m!=1)
    {
        int q=0;
     for(int in=0;in<8;++in)
     {
        int ni=i+dx[in],nj=j+dy[in];
        if(ni>=0 && ni<M && nj>=0 && nj<M && maze[ni][nj]==m-1)
        {
         maze[ni][nj]=-1;
         i=ni,j=nj;
         q=1;
         break;
        }
     }
     if(!q) return ;
     m--;
    }
    OutMaze();
}
//递归式深度优先搜索找路径
void dfs(int i,int j){
	maze[i][j]=-1;
	node[l]={i,j};
    vis[i][j]=1;
	l++;
	if(i==13 && j==13) 
	{
		flag=1;
		return ;
	}
	for(int in=0;in<8;in++)
	{
		int ni=i+dx[in],nj=j+dy[in];
		if(ni>=0 && ni<M && nj>=0 && !vis[ni][nj] && nj<M && maze[ni][nj]==1 )
		{
			dfs(ni,nj);
			if(flag) return ;
            vis[ni][nj]=0;
            maze[ni][nj]=1;
		}
	}
	l--;
}
//主函数
int main(){
    Init();
    GenMaze();
    OutMaze();
    bfs(1,1);
    cout<<'\n';
    OutMazebfs();
    SetMaze();
    dfs(1,1);
    cout<<'\n';
    OutMaze();
}