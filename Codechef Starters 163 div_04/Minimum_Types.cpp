/*
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
        ll n,x;
        cin>>n>>x;
        vector<int> v_1(n);
        vector<int> v_2(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v_1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>v_2[i];
        }

        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = {v_1[i], v_2[i]};
        }
        sort(v.rbegin(), v.rend());
        ll total = 0;
        int type = 0;
        for (auto it: v)
        {
            if (total >= x) break;
            ll val = it.first;
            ll cnt = it.second;          
            total += (ll)val * cnt;
            type++;
        }
        if (total < x) cout<<-1<<"\n";
        else cout<<type<<"\n";
    }
    
    return 0;
}
*/
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
        ll n,x;
        cin>>n>>x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int val; cin>> val;
            v[i] = v[i] * val;
        }
        sort(v.rbegin(), v.rend());
        int cnt = 0;
        while(cnt < n && x > 0)
        {
            x -= v[cnt];
            cnt++;
        }
        if (x <= 0) cout<<cnt<<"\n";
        else cout<<-1<<"\n";
    }
    
    return 0;
}