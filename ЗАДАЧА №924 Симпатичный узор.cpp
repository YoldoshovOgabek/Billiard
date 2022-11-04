#include <bits/stdc++.h>
using namespace std;
#define N 4
main(){
    string a[N];

    for(int i=0;i<N;i++) cin>>a[i];

    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1;j++){
            if((a[i][j]==a[i][j+1]) && (a[i+1][j]==a[i][j]) && (a[i][j]==a[i+1][j+1])){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }

    cout<<"Yes"<<endl;
    return 0;
}
