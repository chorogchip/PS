#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define prtl() putchar('\n')
#define prtds(arr, n) for (int asdf = 0; asdf != (n); ++asdf) printf("%d ", (arr)[asdf]); putchar('\n')
#define foreach(i, n) for (int i = 0; i != (n); ++i)
#define MAIN int main()
#define FAST cin.sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

#include<deque>
int N, L, X, D[5001001];

MAIN { FAST
    cin >> N >> L;
    deque<pair<int, int>> qu;
    for (int i = 0, k = 1 - L; i != N; ++i) {
        cin >> X;
        while (!qu.empty() && X <= qu.back().second) qu.pop_back();
        qu.push_back(make_pair(i, X));
        cout << qu.front().second << ' ';
        if (!qu.empty() && qu.front().first <= k++) qu.pop_front();
    }
}