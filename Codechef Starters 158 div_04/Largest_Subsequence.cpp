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
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long int cnt_A = 0;
        long long int cnt_B = 0;
        for (char ch : s)
        {
            if (ch == 'a') cnt_A++;
            else cnt_B++;
        }
        cout<<2*min(cnt_A,cnt_B)<<"\n";
    }
    return 0;
}