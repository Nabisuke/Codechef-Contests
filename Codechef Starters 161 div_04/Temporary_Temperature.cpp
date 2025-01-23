#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;      
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int mn = v[0], mx = v[0];
        for (int i = 0; i < n; i++)
        {
            if (v[i] < mn)
            {
                mn = v[i];
            }
            if (v[i] > mx)
            {
                mx = v[i];
            }
        }
        ll l = 0;
        ll r = mx - mn;
        if (r < 0) r = 0;
        while (l < r)
        {
            ll m = l + (r - l) / 2;
            ll cnt = 1;
            ll low = v[0] - m;
            ll high = v[0] + m;
            for (int i = 1; i < n; i++)
            {
                ll low_1 = v[i] - m;
                ll high_1 = v[i] + m;
                low = max(low, low_1);
                high = min(high, high_1);
                if (low > high)
                {
                    cnt++;
                    low = low_1;
                    high = high_1;
                }
            }
            if (cnt <= k + 1)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        cout<<l<<"\n";
    }
    return 0;
}
