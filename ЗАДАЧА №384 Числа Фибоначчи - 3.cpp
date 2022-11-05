#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    cin >> i >> j;
    int mx = max(i, j);
    vector<long long> a(mx);
    a[0] = 1, a[1] = 1;
    for(int k = 2; k < mx; ++k){
        a[k] = (a[k - 1] + a[k - 2]) % 1000000000;
    }
    cout << a[__gcd(i, j) - 1] % 1000000000;
    return 0;
}
