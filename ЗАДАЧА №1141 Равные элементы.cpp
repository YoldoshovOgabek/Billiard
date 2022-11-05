#include<iostream>
using namespace std;
int main(){
  int k=1,m=1,a,b;
  cin>>b;
  do
  {
  a=b;
  cin>>b;
  if(a==b)k++;
  else {
  if(k>m)m=k;
  k=1;}
  }
  while(b);
  cout<<m;
}
