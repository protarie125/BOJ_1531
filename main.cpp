#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n, m;
vvl paper;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> m;

  paper = vvl(101, vl(101, 0));

  for (auto i = 0; i < n; ++i) {
    ll l, t, r, b;
    cin >> l >> t >> r >> b;

    for (auto y = t; y <= b; ++y) {
      for (auto x = l; x <= r; ++x) {
        paper[y][x] += 1;
      }
    }
  }

  auto ans = 0LL;
  for (const auto& row : paper) {
    for (const auto& x : row) {
      if (m < x) {
        ++ans;
      }
    }
  }

  cout << ans;

  return 0;
}