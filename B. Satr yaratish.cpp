#include <bits/stdc++.h>
using namespace std;
main(){
    //input: 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1
    //output: axyza
    char a[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int b[26];
    int maxx=0;
    for(int i=0;i<26;i++){
        cin>>b[i];
        if(b[i]>maxx) maxx=b[i];
    }
    //cout<<maxx<<endl;
    for(int i = 0; i < 26; i ++){
        for(int j = 0; j < 26; i ++){
            if(b[i]<b[j]){
                b[i],b[j]=b[j],b[i];
                a[i],a[j]=a[j],a[i];
            }
        }
    }
    for(int i=0;i<26;i++){
        cout<<b[i]<<' ';
    }
    cout<<endl;
    /*
    for(int i=1;i<=maxx;i++){
        for(int j=0;j<=26;j++){
            if(b[j]>=1){
                cout<<a[j];
                b[j]-=1;
            }
        }
    }*/
}
