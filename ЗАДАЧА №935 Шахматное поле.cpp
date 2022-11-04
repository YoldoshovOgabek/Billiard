/*
python
x1,y1,x2,y2=map(int,input().split())
print("YES" if((x1%2+y1%2==x2%2+y2%2 or (x1==y1 and x2==y2) or (x1%2==y1%2 and x2%2==y2%2) or (x2%2==y2%2 and x1%2==y1%2))) else "NO")
*/
#include <iostream>
using namespace std;
int main()
{
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
if((x1%2+y1%2==x2%2+y2%2 || (x1==y1 && x2==y2) || (x1%2==y1%2 && x2%2==y2%2) || (x2%2==y2%2 && x1%2==y1%2))){
  cout<<"YES";
}else{
  cout<<"NO";
}
}
