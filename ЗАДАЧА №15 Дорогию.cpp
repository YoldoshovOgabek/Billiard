#include <iostream>
using namespace std;

int main(){
    int n,s;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int min= 3001;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                s = a[i][j] + a[j][k] + a[k][i];
                if(s<min) min = s;
            }
        }
    }
    cout<<min<<endl;
}
