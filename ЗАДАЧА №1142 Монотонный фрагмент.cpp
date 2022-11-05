#include<iostream>
using namespace std;
int main(){
  int k=1,m=1,a,b,x=1,y=1;
  cin>>b;
  do
  {
  a=b;
  cin>>b;
  if(b>a)k++;
  else {if(k>m)m=k;
  k=1;}
  if(b<a)x++;
  else {if(x>y)y=x;
  x=1;}

  }
  while(b);
  cout<<max(m,y);
}
