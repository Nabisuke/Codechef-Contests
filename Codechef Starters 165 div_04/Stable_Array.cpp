#include <bits/stdc++.h>
using namespace std;
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
        vector<int> v(n);     
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }       
        int cnt = 0;
        bool flag = true;
        while (flag)
        {
            flag = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] < v[i + 1])
                {
                    v[i] = v[i + 1];
                    flag = true;
                }
            }
            if (flag)
            {
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    
    return 0;
}