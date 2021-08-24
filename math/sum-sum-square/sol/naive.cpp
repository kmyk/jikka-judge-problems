#include <algorithm>
#include <cstdint>
#include <numeric>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) std::begin(x), std::end(x)
using namespace std;

constexpr int MOD = 1000000007;

int64_t sq(int64_t x) {
    return x * x;
}

int64_t solve(vector<int64_t> a) {
    int64_t ans = 0;
    for (int64_t a_i : a) {
        for (int64_t a_j : a) {
            ans += sq((a_i - a_j) % MOD);
        }
        ans %= MOD;
    }
    return (ans + MOD) % MOD;
}

int main() {
    int n;
    cin >> n;
    vector<int64_t> a(n);
    REP (i, n) {
        cin >> a[i];
    }
    cout << solve(a) << endl;
    return 0;
}
