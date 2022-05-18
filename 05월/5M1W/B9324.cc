#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
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
#define MOD 14579
#define BOUND 1000000000
#define MININT -2147483647
#define MAXINT 2147483647
#define MAXN 1000001
using namespace std;
using lld = long long;
using pii = pair<int, int>;
using pll = pair<lld, lld>;

int T, v[26];
string s;
int sz;

bool solve() {
	fill(v, v + 26, 0);
	for (int i = 0; i < s.size(); i++) {
		int now = s[i] - 'A';
		v[now]++;
		if (v[now] % 3 == 0) {
			if (i == s.size() - 1) return false;
			if (s[i + 1] != s[i]) return false;
			i++;
		}
	}
	return true;
}


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> T;
	while (T--) {
		cin >> s;
		if (solve()) cout << "OK\n";
		else cout << "FAKE\n";
	}

	return 0;
}
