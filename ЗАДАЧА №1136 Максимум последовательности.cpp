#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=1,a;
  do{
    cin>>a;
    if(a>n)n=a;
  }while(a);
  cout<<n;
}
