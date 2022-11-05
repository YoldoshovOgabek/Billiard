#include<iostream>
using namespace std;
int main(){
  int k=0,n=0,x,y;
  cin>>y>>x;
  do
  {
  cin>>n;
  if (n!=0&&x>n&&x>y)k++;
  y=x;
  x=n;
  }
  while(n!=0);
  cout<<k;
}
