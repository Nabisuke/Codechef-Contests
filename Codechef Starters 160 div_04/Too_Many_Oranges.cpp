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
        int n,k;
        cin>>n>>k;
        int mn = n*10;
        int mx = n*12;
        if (k >= mn && k <= mx) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }   
    return 0;
}