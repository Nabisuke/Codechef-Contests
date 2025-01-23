#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> v(n-1);
        for (int i = 0; i < n-1; i++)
        {
            cin>>v[i];
        }
        ll first = v[0] / n;
        cout<<first<<" ";        
        ll second = abs(v[0] - first);
        cout<<second<<" ";      
        ll current = second;
        for (int i = 1; i < n-1; i++)
        {
            ll next = abs(v[i] - current);
            cout<<next<<" ";
            current = next;
        }
        cout<<"\n";
    }

    return 0;
}
