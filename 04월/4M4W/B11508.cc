#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <math.h>
#include <set>
#include <cassert>
#include <bitset>
#include <sstream>
#include <cmath>
#include <random>
#include <numeric>
#define MOD 998244353
#define BOUND 1000000000
#define MININT -2147483647
#define MAXINT 2147483647
#define MAXN 1000001
using namespace std;
using lld = long long;
using pii = pair<int, int>;
using pll = pair<lld, lld>;

int N, K;
int v[100002];
lld res;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    K = ((N + 2) / 3) * 3;
    for (int i = 0; i < N; i++) cin >> v[i];
    sort(v, v + K, greater<int>());
    for (int i = 0; i < K; i++) {
        if ((i % 3) == 2) continue;
        res += v[i];
    }
    cout << res;
    
    return 0;
}