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

int N, T, P, X, S, m = 2101010101, C, M;
#include<queue>
priority_queue<int> qu;

int main() { FAST
    cin >> N >> T >> P;
    for (int i = 0; T > 0 && i != N; ++i, T -= P) {
        cin >> X;
        if (X <= m) {
            if (S + X <= T) {
                qu.push(X); S += X; ++C;
                continue;
            }
        } else {
            if (S + m <= T) {
                qu.push(m); S += m; ++C;
                m = X;
                continue;
            }
        }
        m = min(m, X);
        if (!qu.empty()) {
            M = qu.top();
            if (M > m) {
                qu.pop(); qu.push(m); S -= M - m; m = M;
            }
        }
    }
    cout << C << endl;
}
