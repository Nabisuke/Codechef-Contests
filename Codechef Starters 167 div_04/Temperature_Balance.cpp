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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll sum = 0;
        ll total = 0;
        for(int temp : v)
        {
            sum += temp;
            total += abs(sum);
        }
        cout<<total<<"\n";

    }
    
    return 0;
}