#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int x, m; cin >> x >> m;
    int s = x;
    while(m--) s += x;
    cout << s;
}