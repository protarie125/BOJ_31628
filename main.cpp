#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
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

using ll = int64_t;
using vl = vector<ll>;

using vs = vector<string>;
using vvs = vector<vs>;

vvs Bd(10, vs(10));

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  for (auto&& r : Bd) {
    for (auto&& x : r) {
      cin >> x;
    }
  }

  for (auto i = 0; i < 10; ++i) {
    auto is_conn = true;
    auto b = Bd[i][0];
    for (auto j = 1; j < 10; ++j) {
      if (Bd[i][j] != b) {
        is_conn = false;
        break;
      }
    }

    if (is_conn) {
      cout << 1;
      return 0;
    }
  }

  for (auto i = 0; i < 10; ++i) {
    auto is_conn = true;
    auto b = Bd[0][i];
    for (auto j = 1; j < 10; ++j) {
      if (Bd[j][i] != b) {
        is_conn = false;
        break;
      }
    }

    if (is_conn) {
      cout << 1;
      return 0;
    }
  }

  cout << 0;

  return 0;
}