#include<bits/stdc++.h>
using namespace std;
main(){
    int n,m;
    cin>>n>>m;
    bool tub_son[m+1];
    memset(tub_son,true,m+1);
    tub_son[1]=false;
    for(int i=2;i*i<=m;i++){
        if(tub_son[i]){
            for(int j=i*i;j<=m;j+=i)
                tub_son[j]=false;
        }

    }
    bool k=false;
    for(int i=n;i<=m;i++){
        if(tub_son[i]){
            k=true;
            cout<<i<<endl;
        }

    }
    if(!k)
        cout<<"Absent";

}
