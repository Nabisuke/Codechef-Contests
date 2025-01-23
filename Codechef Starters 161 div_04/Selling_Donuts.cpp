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
        int a,b;
        cin>>a>>b;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin>>v[i];
        }
        int cnt = 0;
        for (int i = 0; i < b; i++)
        {
            int x;
            cin>>x;
            if (v[x-1] == 0)
            {
                cnt++;
            }
            else if (v[x-1] > 0)
            {
                v[x-1]--;
            }
        }
        cout<<cnt<<"\n";

    }   
    return 0;
}