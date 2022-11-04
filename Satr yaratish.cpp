#include <bits/stdc++.h>
using namespace std;
main()
{
    //input: 200 20 10 10 100 10 30 19 0 300 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 200
    //output: axyza
    char a[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int b[26];
    for(int i=0; i<26; i++)
    {
        cin>>b[i];
    }

    for(int i = 0; i < 101; i ++)
    {
        for(int j = 0; j < 25; j ++)
        {
            if(b[j]<b[j+1])
            {
                int t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
                int p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
        }
    }
    int s=0;
    for(int i=1; i<26; i++)
    {
        s+=b[i];
    }
    string l="";
    if(b[0]==s or b[0]-s==1)
    {

        int t=1;
        for(int i=0; i<b[0]; i++)
        {
            l+=a[0];
            if(b[t]>0)
            {
                l+=a[t];
                b[t]--;
            }
            else
            {
                t++;
                if(b[t]>0)
                {
                    l+=a[t];
                    b[t]--;
                }
            }
        }
    }else{
        for(int i=1;i<=b[0];i++){
            for(int j=0;j<26;j++){
                if(b[j]>=1){
                    l+=a[j];
                    b[j]-=1;
                }
            }
        }
    }
    cout<<l;
}
