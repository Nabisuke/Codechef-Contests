#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z;
    cin>>x>>y>>z;
    int combo = (z*2) + y;
    int non_combo = (x*2) + (y*3);
    cout<<min(combo,non_combo)<<"\n";   
    return 0;
}