#include<bits/stdc++.h>
using namespace std;
struct talaba{
  string name;
  int bal1,bal2,bal3,bal;
};
bool comp(talaba a, talaba b){
    return (a.bal>b.bal)||(a.bal==b.bal && a.name>b.name);
}
main(){
    int n,m;
    cin>>n>>m;
    talaba a[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i].name>>a[i].bal1>>a[i].bal2>>a[i].bal3;
        a[i].bal=a[i].bal1+a[i].bal2+a[i].bal3;
    }
    sort(a+1,a+n+1,comp);
    cout<<a[m].name<<' '<<a[m].bal;


}
