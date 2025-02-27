#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }       
        int odd = 0;
        bool flag = false;       
        for (auto it : mp)
        {
            int num = it.first;
            int cnt = it.second;
            if(num == 0)
            {
                continue;
            }
            if(cnt % 2 == 1)
            {
                odd++;
            }
            if(cnt / 2 > 0)
            {
                flag = true;

            }
                
        }
        if(mp[0] > 0)
        {
            flag = true;
        }
        
        int val;         
        if (flag)
        {
            val = 1;
        }
        else
        {
            val = 0;
        }
        int ans = odd + val;
        cout<<ans<<"\n";



    }
    
    return 0;
}