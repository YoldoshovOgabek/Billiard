#include<bits/stdc++.h>
using namespace std;
bool used[1001];
vector <int>v[1001];
int k=0;
void dfs(int l, int y)
{
    used[l]=1;
    if(v[l].size()==0)
    {
        cout<<-1<<endl;
    }
    else
    {

        for(int i=0; i<v[l].size(); i++)
        {
            int to=v[l][i];
            if(to==y)
            {
                cout<<k+1<<endl;
                k=0;
                return;
            }
            if(!used[to])
            {
                k++;
                dfs(to,y);
            }
        }
        if(k==0) cout<<-15<<endl;
    }

}
main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int l,r;
        cin>>l>>r;
        if(l==r)
        {
            cout<<0<<endl;
            continue;
        }
        dfs(l,r);
    }
}
