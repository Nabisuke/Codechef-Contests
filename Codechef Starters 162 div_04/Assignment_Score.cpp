#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            total += x;
        }
        int passing_score = ((n+1) * 100)/2;
        if (total > passing_score) cout<<0<<"\n";
        else
        {
            int required_score = passing_score - total;
            if (required_score > 100) cout<<-1<<"\n";
            else cout<<required_score<<"\n";
        }       
    }
    return 0;
}