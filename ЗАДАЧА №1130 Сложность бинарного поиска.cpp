#include <cstdio>
using namespace std;
int main()
{
  long long n;
  scanf("%lld", &n);
  int count = 0;
  while (n > 1){
    n = (n+1) / 2;
    count++;
  }
  printf("%d", count);
  return 0;
}
