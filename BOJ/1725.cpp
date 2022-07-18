#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

#define prtl() putchar('\n')
#define prtds(arr, n) for (int asdf = 0; asdf != (n); ++asdf) printf("%d ", (arr)[asdf]); putchar('\n')
#define foreach(i, n) for (int i = 0; i != (n); ++i)
#define LL long long
#define MAIN int main()
#define FAST cin.sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int N, A[100000];

int sol(int lo, int hi) {
    if (lo >= hi) return A[hi];
    const int md = lo + hi >> 1;
    int i = md, j = md, res = A[md], minH = A[md];
    while (i > lo && j < hi)
        if (A[i - 1] > A[j + 1]) {
            i--;
            minH = min(minH, A[i]);
            res = max(res, minH * (j - i + 1));
        } else {
            j++;
            minH = min(minH, A[j]);
            res = max(res, minH * (j - i + 1));
        }
    while (i > lo) {
        i--;
        minH = min(minH, A[i]);
        res = max(res, minH * (j - i + 1));
    }
    while (j < hi){
        j++;
        minH = min(minH, A[j]);
        res = max(res, minH * (j - i + 1));
    }
    return max(res, max(sol(lo, md - 1), sol(md + 1, hi)));
}

MAIN { FAST
    cin >> N;
    foreach (i, N) cin >> A[i];
    cout << sol(0, N - 1);
}