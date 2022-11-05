#include <iostream>
using namespace std;

int main(){
  int k=0,n,i,h;
  cin>>n;
  for(i=1;i<=n&&k==0;i++){
  cin>>h;
  if(h<=437){
    k=i;
  }
}
  if(k){
    cout<<"Crash "<<k;
  }else{
    cout<<"No crash";
  }
}
