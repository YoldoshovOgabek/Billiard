#include<bits/stdc++.h>
using namespace std;
vector<int>g[10001];
bool used[10001];
void dfs(int v){
    used[v]=true;
    for(int i=0;i<g[v].size();i++){
        int to=g[v][i];
        if(!used[to]){
            dfs(to);
        }
    }
}
main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]){
                g[i].push_back(j);
            }
        }
    }
    dfs(m);
    int k=-1;
    for(int i=1;i<=n;i++){
        if(used[i]){
           k++;
        }
    }
    cout<<k;

}
