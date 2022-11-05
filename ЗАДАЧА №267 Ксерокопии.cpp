#include <stdio.h>
int NOD(int a, int b)
{
    int temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    temp=b;
    while(temp%a!=0)
        temp+=b;
    return temp;
}
int main(){
  int n, x, y, nod, temp1, temp2, time;
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  scanf("%d%d%d", &n, &x, &y);
  if(x>y)
  {
      temp1=x;
      x=y;
      y=temp1;
  }
  time=x;
  nod=NOD(x, y);
  temp1=nod/x+nod/y;
  time+=((n-1)/temp1)*nod;

  n=(n-1)%temp1;
  temp1=0; temp2=0;
    while(n>0)
  {
      temp1++;
      temp2++;
      time++;
     if(temp1>=x)
      {
          n--;
          temp1=temp1%x;
      }
      if(temp2>=y)
      {
          n--;
          temp2=temp2%y;
      }
  }

  printf("%d", time);
  return 0;
}
