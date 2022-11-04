#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long m, n;
    cin >> m >> n;
    long g = __gcd(m, n);
    m /= g;
    n /= g;
    cout << (n + m - 2) << " ";
    if(n % 2 == 0 and m % 2 != 0) cout << 4;
    if(n % 2 != 0 and m % 2 != 0) cout << 3;
    if(n % 2 != 0 and m % 2 == 0) cout << 2;
    return 0;
}
