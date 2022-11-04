#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <time.h>
#include <random>
#include <algorithm>
#include <string>
#include <string.h>
#include <queue>
#include <deque>
#include <functional>
#include <cctype>
#include <list>
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double db;
const int inf = 1000000007;

int n;
ll a[200], d[200], rs;
bool u[200];
ll rec(int k){
    if (k >= n){
        return inf;
    }
    if (u[k])
        return d[k];
    u[k] = 1;
    if (k == n - 2){
        return d[k] = a[n - 1] - a[n - 2];
    }
    if (k == n - 1){
        return d[k] = 0;
    }

    return d[k] = min(rec(k + 1) + a[k + 1] - a[k], rec(k + 2) + a[k + 2] - a[k + 1]);

}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n);
    switch (n){
    case 2:
        cout << a[1] - a[0];
        return 0;
    case 3:
        cout << a[1] - a[0] + a[2] - a[1];
        return 0;
    case 4:
        cout << a[1] - a[0] + a[3] - a[2];
        return 0;
    }
    rs += a[1] - a[0];
    rs += rec(1);
    cout << rs;
    return 0;
}
