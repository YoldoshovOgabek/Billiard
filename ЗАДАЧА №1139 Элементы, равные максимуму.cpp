#include<iostream>
using namespace std;
int main(){
  int m,k=1,x;
  cin>>m;
  do
  {
  cin>>x;
  if (x>m){m=x;k=1;}
  else if(x==m)k++;
  }
  while(x);
  cout<<k;
}
