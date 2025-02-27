#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int x,y; cin>>x>>y;
        string s;
        for (int i = 0; i < x/2; i++)
        {
            s.push_back('1');
        }
        for (int i = 0; i < y; i++)
        {
            s.push_back('2');
        }
        for (int i = 0; i < x/2; i++)
        {
            s.push_back('1');
        }
        cout<<s<<"\n";

    }
    
    
    return 0;
}