#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,t;
    cin>>n>>m;
    int a[n] = {};
    for(int i=0;i<2*m;i++){
        cin>>t;
        a[t-1]++;
    }
    for(int i : a)
        cout << i << ' ';
    cout<<endl;
}
