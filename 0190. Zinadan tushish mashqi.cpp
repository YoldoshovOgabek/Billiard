#include<bits/stdc++.h>
using namespace std;
queue<int> q;
bool used[10000001];
int d[10000001];
void dfs(int n){
    used[n]=true;
    q.push(n);
    while(!q.empty()){
    int to=q.front();
    q.pop();
    if(to%3==0){
        if(!used[to/3]){
            used[to/3]=true;
            q.push(to/3);
            d[to/3]=d[to]+1;
        }
    }
    if(to%2==0){
        if(!used[to/2]){
            used[to/2]=true;
            q.push(to/2);
            d[to/2]=d[to]+1;
        }
    }
    if(to>1){
        if(!used[to-1]){
            used[to-1]=true;
            q.push(to-1);
            d[to-1]=d[to]+1;
        }
    }
}}
main(){
    int v;
    cin>>v;
    dfs(v);
    cout<<d[1];
}
