#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt_0 = count(s.begin(), s.end(), '0');
        int cnt_1 = n - cnt_0;
        if (cnt_0 == n || cnt_1 == n) cout << n << "\n";
        else cout << 1 << "\n";
    }

    return 0;
}
