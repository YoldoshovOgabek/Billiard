#include<iostream>
using namespace std;
int main(){
  int k=0,n=0,m=0,x,y,z;
  cin>>x>>y>>z;
  do
  {
  k++;
  if(y>z&&x<y)
  {
  n++;
  if(n>1 && (n==2||n>2 && k<m))m=k;
  k=0;
  }
  x=y;
  y=z;
  cin>>z;}
  while(z);
  cout<<m;
}
