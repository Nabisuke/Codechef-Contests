#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n);
        int total=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            total+=v[i];
        }
        int result = ceil((double)total/k);
        cout<<result<<endl;
    }
    
    return 0;
}