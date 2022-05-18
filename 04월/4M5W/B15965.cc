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

int N;
vector<int> pr;

bool isPrime(int X) {
	for (int i = 0; pr[i] * pr[i] <= X; i++) {
		if (X % pr[i] == 0) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;
	pr.push_back(2);
	for (int i = 3; pr.size() < N; i += 2) if (isPrime(i)) pr.push_back(i);
	cout << pr.back();

	return 0;
}
