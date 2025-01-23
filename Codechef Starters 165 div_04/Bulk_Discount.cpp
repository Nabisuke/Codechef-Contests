#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += max(0LL, v[i] - i);
        }
        cout<<total<<"\n";

    }
    
    return 0;
}