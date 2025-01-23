#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k;
        cin >>n>>m>>k;
        int min_dif = INT_MAX;
        for (int l = 1; l <= n; l++)
        {
            for (int w = 1; w <= m; w++)
            {
                int p = 2*(l + w);
                int dif = abs(p - k);
                min_dif = min(min_dif, dif);
            }
        }
        cout<<min_dif<<"\n";
    }
    
    return 0;
}