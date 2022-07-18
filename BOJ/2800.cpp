#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
#define prtl() putchar('\n')
#define prtds(arr, n) for (int asdf = 0; asdf != (n); ++asdf) printf("%d ", (arr)[asdf]); putchar('\n')
#define foreach(i, n) for (int i = 0; i != (n); ++i)
#define MAIN int main()
#define FAST cin.sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

#include<stack>

char A[201], B[201], C[201];
vector<string> ans;
stack<int> st;

MAIN { FAST
    cin >> A;
    int cnt = 0;
    for (int i = 0;; ++i)
        if      (A[i] == '\0') break;
        else if (A[i] == '(') st.push(B[i] = ++cnt);
        else if (A[i] == ')') B[i] = st.top(), st.pop();
    cnt = 1 << cnt;
    for (int i = 1; i != cnt; ++i) {
        for (int j = 0, k = 0; A[j] != '\0'; ++j)
            if (!B[j] || !(cnt>>B[j]&i)) C[k++] = A[j];
        ans.push_back(string(C));
        memset(C, 0, 201);
    }
    sort(ans.begin(), ans.end());
    for (auto it = ans.begin(); it != ans.end();)
        if (*it == *(it + 1)) it = ans.erase(it);
        else it++;
    for (auto &o : ans) cout << o << endl;

    
}