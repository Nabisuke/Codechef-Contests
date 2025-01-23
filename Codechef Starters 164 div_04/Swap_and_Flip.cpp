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
        string S,T;
        cin >> S >> T;
        int countS0 = count(S.begin(), S.end(), '0');
        int countS1 = count(S.begin(), S.end(), '1');
        int countT0 = count(T.begin(), T.end(), '0');
        int countT1 = count(T.begin(), T.end(), '1');
        if (countS0 == countT0 && countS1 == countT1) cout<<"YES"<<"\n";
        else
        {
            if ((countS0 % 2 == countT0 % 2) && (countS1 % 2 == countT1 % 2)) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    
    return 0;
}
