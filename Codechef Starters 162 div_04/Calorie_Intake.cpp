#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z; cin>>x>>y>>z;
    if (y*z > x) cout<<-1<<"\n";
    else cout<<x-(y*z)<<"\n";
    return 0;
}