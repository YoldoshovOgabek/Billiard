#include <bits/stdc++.h>
using namespace std;

struct timeSort{
    int hour, minute, seconds;
};
bool comp(timeSort a, timeSort b){
    return (a.hour < b.hour) || (a.hour==b.hour && a.minute < b.minute) || (a.hour==b.hour && a.minute==b.minute && a.seconds < b.seconds);
}

main(){
    int n;
    cin>>n;
    timeSort a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i].hour>>a[i].minute>>a[i].seconds;
    sort(a+1,a+n+1,comp);
    for(int i=1;i<=n;i++){
        cout<<a[i].hour<<' '<<a[i].minute<<' '<<a[i].seconds<<endl;
    }
}
