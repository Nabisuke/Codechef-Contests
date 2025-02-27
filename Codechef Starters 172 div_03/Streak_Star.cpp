#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int N,x;
        cin>>N>>x;
        vector<int> v(N);
        for (int i = 0; i < N;i++)
        {
            cin>>v[i];
        }
        auto ok = [&](const vector<int>& a)
        {
            int n = a.size();
            if (n == 0) return 0;
            int mx = 1, curr = 1;
            for (int i = 1; i < n; i++)
            {
                if (a[i] >= a[i - 1]) curr++;
                else curr = 1;
                mx = max(mx, curr);
            }
            return mx;
        };
        int result = ok(v);
        for (int i = 0; i < N; i++)
        {
            int val = v[i];
            v[i] = v[i] * x;
            result = max(result, ok(v));
            v[i] = val;
        }
        cout<<result<<"\n";
    }

    return 0;
}
