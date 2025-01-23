#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        ll votes_needed = (n / 2) + 1;
        vector<ll> A(n);
        vector<ll> B(n);
        for(ll i = 0; i < n; i++)
        {
            cin>>A[i]>>B[i];
        }
        vector<ll> v;
        ll wins = 0;
        if (n == 1)
        {
            if (A[0] + x > B[0]) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }
        for (ll i = 0; i < n; i++)
        {
            if (A[i] > B[i]) wins++;
            else v.push_back(B[i] - A[i] + 1);
        }

        if (wins >= votes_needed)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        sort(v.begin(), v.end());
        ll i = 0;
        while (i < v.size())
        {
            if (x >= v[i])
            {
                x -= v[i];
                wins++;
            }
            if (wins >= votes_needed) break;
            i++;
        }

        if (wins >= votes_needed) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}