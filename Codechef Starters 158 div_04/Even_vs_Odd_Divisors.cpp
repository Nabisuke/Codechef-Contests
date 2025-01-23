#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int odd = 0;
        int even = 0;
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                if (i % 2 == 0) even++;
                else odd++;
            }
        }
        if (even > odd) cout<<1<<"\n";
        else if (even == odd) cout<<0<<"\n";
        else cout<<-1<<"\n";       
    }
    return 0;
}