#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        ll L,R;
        cin>>n>>L>>R;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        if (n > 100)
        {
            cout <<"NO"<<"\n";
            continue;
        }
        ll product = 1;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int xor_val = v[i] ^ v[j];
                product *= xor_val;
            }
        }
        if (product >= L && product <= R) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}
