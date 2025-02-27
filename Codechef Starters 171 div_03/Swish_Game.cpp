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
        ll a,b;
        cin>>a>>b;
        string s; cin>>s;
        ll swis = 0;
        ll pass = 0;
        for (char c : s)
        {
            if (c == 'S') swis++;
            else pass++;
        }
        if (swis >= b) cout<<a<<"\n";
        else
        {
            ll result = (a+b) - swis -1;
            cout<<result<<"\n";
        }
    }
    
    return 0;
}