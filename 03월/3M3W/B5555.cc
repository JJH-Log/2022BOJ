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
#include <math.h>
#include <set>
#include <cassert>
#include <bitset>
#include <sstream>
#include <cmath>
#include <random>
#include <numeric>
#define MOD 1000000007
#define BOUND 1000000000
#define MININT -2147483647
#define MAXINT 2147483647
#define MAXN 1000001
using namespace std;
using lld = long long;
using pii = pair<int, int>;
using pll = pair<lld, lld>;

string s, tmp, tar;
int N, res;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> tar >> N;
	for(int i = 0; i < N; i++){
		cin >> s;
		bool FLAG = false;
		for(int i = 0; !FLAG && i < 10; i++){
			tmp = s.substr(i);
			if(i) tmp += s.substr(0, i);
			if(tmp.find(tar) != string::npos) FLAG = true;
		}
		res += FLAG;
	}
	cout << res;
	
	return 0;
}