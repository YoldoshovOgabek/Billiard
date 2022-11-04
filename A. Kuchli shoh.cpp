#include <bits/stdc++.h>
using namespace std;
main(){
    char a1,n1,a2,n2;
    cin>>a1>>n1>>a2>>n2;
    int a = abs(a2-a1), n = abs(n2-n1);
    //cout<<a<<' '<<n<<endl;
    int t=0;
    if(a>n)
    while(a){
        if(a>=2){
            t++;
            a-=2;
        }else if(a>=1){
            t++;
            a--;
        }
    }
    else
    while(n){
        if(n>=2){
            t++;
            n-=2;
        }else if(n>=1){
            t++;
            n--;
        }
    }
    cout<<t;
}
