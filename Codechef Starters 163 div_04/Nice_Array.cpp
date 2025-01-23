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
        int n,k;
        cin>>n>>k;
        ll floor_total = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            ll val = floor(1.0 * x / k);
            floor_total += val;
            if (x % k != 0)cnt++;
        }
        if (floor_total > 0 || floor_total <-cnt) cout<<"NO"<<"\n";
        else cout << "YES" << endl;
    }
    
    return 0;
}