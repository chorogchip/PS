#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
#define fore(i, n) for (int i = 0; i != (n); ++i)
#define FAST cin.sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
using namespace std;

int N, M, A[1001], B[1001];
unsigned long long res = 1ULL;
bool isOver = false;

int gcd(int u, int v) {
    if (u == v || u == 0 || v == 0)
        return u | v;
    
    unsigned shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    v >>= __builtin_ctz(v);

    const auto &[min, max] = std::minmax(u, v);

    return gcd(max - min, min) << shift;;
}
main() { FAST
    cin >> N;
    fore (i, N) cin >> A[i];
    cin >> M;
    fore (i, M) cin >> B[i];
    for (int i = 0; i != N; ++i)
        for (int j = 0; j != M; ++j) {
            if (A[i] == 1) break;
            int ret = gcd(A[i], B[j]);
            A[i] /= ret;
            B[j] /= ret;
            res *= ret;
            if (res >= 1000000000ULL) {
                res %= 1000000000ULL;
                isOver = true;
            }
        }
    if (isOver) printf("%09llu", res);
    else cout << res;
}

