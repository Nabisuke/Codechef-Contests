#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll n, x;
        cin>>n>>x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        ll result = 0;
        for (int i = 0; i < n; i++)
        {
            int days_left = n - 1 - i;
            ll hp = v[i] + days_left * x;
            result = max(result, hp);
            
        }
        cout<<result<<endl;
        
    }

    
    return 0;
}