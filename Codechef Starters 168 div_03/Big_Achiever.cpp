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
        int n; cin>>n;
        vector<int> v(n);
        int mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mx = max(mx, v[i]);
            if (v[i] == mx)
            {
                cout<<1<<" ";
            }
            else if (v[i] > mx)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<"\n";
        
    }
    
    return 0;
}