#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a = n / 4; int b = n % 4;
        int ans = a + b/2;
        cout << ans << '\n';
    }
}