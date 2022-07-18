#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
#define fore(i, n) for (int i = 0; i != (n); ++i)
#define for1(i, n) for (int i = 1; i <= (n); ++i)
#define FAST cin.sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
constexpr int INF = 1000*1000*1000;

int N, M, K;
ll A, B, C, D[1010101], T[1010101];

ll sum(int i) {
    ll s = 0;
    while (i) s += T[i], i -= i&-i;
    return s;
}
void add(int i, ll x) {
    while (i <= N) T[i] += x, i += i&-i;
}

int main() { FAST
    cin >> N >> M >> K;
    for1(i, N) cin >> D[i], add(i, D[i]);
    M += K;
    fore (i, M) {
        cin >> A >> B >> C;
        if (A == 1) add(B, C - D[B]), D[B] = C;
        else cout << sum(C) - sum(B - 1) << endl;
    }
}
