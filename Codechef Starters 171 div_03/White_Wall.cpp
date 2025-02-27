#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    string ss[3] = {"RGB", "GBR", "BRG"};
    while (t--)
    {
        ll n;
        cin>>n;
        string s; cin>>s;
        int ans = INT_MAX;
        for (int i = 0; i < 3; i++)
        {
            int changes = 0;
            for (int j = 0; j < n; j++)
            {
                int indx = j % 3;
                char pattern = ss[i][indx];               
                if (s[j] != pattern) changes++;
            }           
            ans = min(ans, changes);
        }

        cout<<ans<<"\n";
    }

    return 0;
}