
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int u,v;
    bool matrix[n+1][n+1] ={0};
    for(int i =1;i<n;i++){
        cin>>u>>v;
        matrix[u][v] =true;
    }
    

  return 0;
}