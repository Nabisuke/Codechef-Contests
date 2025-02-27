#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    string aim = "ADVITIYA";
    while(t--)
    {
        string s; cin>>s;
        
        int total = 0;
        for (int i = 0; i < 8; i++)
        {
            char current = s[i];
            char target = aim[i];
            int steps = (target - current + 26) % 26;
            total += steps;
        }
        cout<<total<<endl;
    }
    
    return 0;
}