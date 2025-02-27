#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while (t--)
    {
        string a,b;
        cin>>a>>b;
        ll ln = 0;
        ll j = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[j])
            {
                j++;
                ln++;
            }
        }
        if (ln != b.size())
        {
            cout << -1 << "\n";
        }
        else
        {
            ll n = a.size(), m = b.size();
            ll diff = n - m;
            vector<vector<int>> pos(26);
            for (int i = 0; i < n; i++)
            {
                pos[a[i] - 'a'].push_back(i + 1);
            }
            ll total = (ll)n * (n + 1) / 2;
            ll mn = (ll)m * (m + 1) / 2;
            ll mx = total - mn - (ll)diff * (diff - 1) / 2;
            auto ok = [&](ll X)
            {
                ll limit = total - (ll)diff * (diff - 1) / 2 - X;
                ll result = 0;
                int curr = n + 1;
                for (int i = m - 1; i >= 0; i--)
                {
                    int ch = b[i] - 'a';
                    auto v_1 = pos[ch];
                    auto it = lower_bound(v_1.begin(), v_1.end(), curr);
                    if (it == v_1.begin())
                    {
                        return false;
                    }
                    it--;
                    ll val = *it;
                    result += val;
                    curr = val;
                }
                return result >= limit;
            };
            ll l = 0, r = mx, ans = r;
            while (l <= r)
            {
                ll mid = l + (r - l) / 2;
                if (ok(mid))
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            cout<<ans<<"\n";

        }
        
    }

    return 0;
}
