#include <bits/stdc++.h>
using namespace std;

vector<long long> prime = {
    2,   3,   5,   7,   11,  13,  17,  19,  23,  29,  31,  37,  41,  43,  47,
    53,  59,  61,  67,  71,  73,  79,  83,  89,  97,  101, 103, 107, 109, 113,
    127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197,
    199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271};

long long result_d = 1;
long long result = 1;

void solve(long long n, long long d, long long x, long long curr_prime,
           string str) {
  if (x >= n) {
    return;
  }
  // DBG(str, x, d);
  if (d == result_d) {
    result = min(x, result);
  }

  if (d > result_d) {
    result = x;
    result_d = d;
  }
  long long res = 0;

  for (long long i = 1; true; i++) {
    x *= prime[curr_prime];
    str += " * ";
    str += to_string(prime[curr_prime]);
    if (x > n) {
      break;
    }
    solve(n, (d * (i + 1)), x, curr_prime + 1, str);
  }
  return;
}

int main() {
  std::ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long long n;

  cin >> n;

  solve(n, 1, 1, 0, "1");

  cout << result;
  return 0;
}
