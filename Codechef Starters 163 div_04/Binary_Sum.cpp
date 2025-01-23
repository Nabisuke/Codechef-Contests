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
        if (n % 2 != 0)
        {
            int first_num = n/2;
            int second_num = first_num +1;
            if (k == first_num || k == second_num)
            {
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }

        }
        else
        {
            int val = n / 2;
            if (k == val) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        
    }
    
    return 0;
}