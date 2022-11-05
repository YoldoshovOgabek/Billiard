/*python
a=list(map(int,input().split()))
maxx=a[0]
b=[]
for i in range(len(a)):
    if(a[i]!=0):
        b.append(a[i])
        if(maxx<a[i]):
            maxx=a[i]
    else:
        break
b.sort()
b.reverse()
print(b[1])
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,i1,i2=0;
  cin>>i1;
  do{
    cin>>a;
    if(a>i1){
      i2=i1;
      i1=a;
    }else if(a>i2)i2=a;
  }while(a);
  cout<<i2;
}
