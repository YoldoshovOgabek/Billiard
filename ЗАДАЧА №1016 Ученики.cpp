#include<bits/stdc++.h>
using namespace std;
struct talaba{
  string sinf, last_name, first_name, data, harf;
  int raqam;
};
bool comp(talaba a, talaba b){
    return (a.raqam<b.raqam )||(a.raqam==b.raqam && a.harf<b.harf)||(a.sinf==b.sinf && a.last_name<b.last_name);
}
main(){
    int n;
    cin>>n;
    string ss;
    talaba a[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i].last_name>>a[i].first_name>>a[i].sinf>>a[i].data;
        string s=a[i].sinf;
        if(s.size()==2){
            ss=s.substr(0,1);
            a[i].raqam=stoi(ss);
            a[i].harf=s.substr(1,1);
        }
        else{
            ss=s.substr(0,2);
            a[i].raqam=stoi(ss);
            a[i].harf=s.substr(2,1);
        }

    }
    sort(a+1,a+n+1,comp);
    for( int i=1; i<=n; i++){
        cout<<a[i].sinf<<' '<<a[i].last_name<<' '<<a[i].first_name<<' '<<a[i].data<<endl;
    }


}
