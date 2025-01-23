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
        int n,k,p; cin>>n>>k>>p;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        ll ved_height = k+ v[0];
        ll varun_height = p;
        for (int i = 1; i < n; i++)
        {
            varun_height += v[i];
        }
        if (varun_height > ved_height) cout<<"Varun"<<"\n";
        else if (varun_height < ved_height) cout<<"Ved"<<"\n";
        else cout<<"Equal"<<"\n";
    }
    
    return 0;
}