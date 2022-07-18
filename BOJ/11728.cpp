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

int AN, BN, A[1010101], B[1010101];

int main() { FAST
    cin >> AN >> BN;
    fore (i, AN) cin >> A[i];
    fore (i, BN) cin >> B[i];
    int i = 0, j = 0;
    while (i != AN && j != BN) {
        if (A[i] < B[j]) cout << A[i++] << ' ';
        else cout << B[j++] << ' ';
    }
    while (i != AN) cout << A[i++] << ' ';
    while (j != BN) cout << B[j++] << ' ';
    cout << endl;
}
