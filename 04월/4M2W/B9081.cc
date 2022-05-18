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

vector<char> v;
string s, check;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	while (N--) {
		cin >> s;
		for (auto c : s) v.push_back(c);
		next_permutation(v.begin(), v.end());
		check = "";
		for (auto c : v) check += c;

		if (s < check) cout << check << '\n';
		else cout << s << '\n';
		v.clear();
	}

	return 0;
}