#include<bits/stdc++.h>
using namespace std;
vector<int>g[10001];
bool used[10001];
void dfs(int v ){
    used[v]=true;
    for(int i=0;i<g[v].size();i++){
        int to=g[v][i];
        if(!used[to]){
            dfs(to);
        }
    }
}
main(){
    int n,s;
    cin>>n>>s;
    int h,z;
    while(true){
        cin>>h;
        if(h==0){
            break;
        }
        cin>>z;
        g[h].push_back(z);
    }


    dfs(s);
    for(int i=1;i<=n;i++){
        if(!used[i]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";

}
