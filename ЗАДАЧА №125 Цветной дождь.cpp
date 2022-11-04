#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int bridges[n][n];
    int colors[n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>bridges[i][j];
    for(int i=0;i<n;i++)
        cin>>colors[i];

    int k=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if(bridges[i][j] && (colors[i] != colors[j]))
            k++;
    cout<<k<<endl;
}
