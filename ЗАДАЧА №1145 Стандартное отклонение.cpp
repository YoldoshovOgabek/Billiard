#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int x,n=0;
  double s,s1=0,s2=0;
  cin>>x;
  do
  {
  n++;
  s1+=x;
  s2+=x*x;
  cin>>x;
  }
  while(x);
  s=s1/n;
  cout<<sqrt((s2+s*s*n-2*s1*s)/(n-1));
}
