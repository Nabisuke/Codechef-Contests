#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        string s;
        cin>>s;
        if(s[0] < 'z')
        {
            if(n == 1)
            {
                char c = s[0] + 1;
                cout << c << "\n";
            }
            else
            {
                char c = s[0] + 1;
                string result(n, 'o');
                result[0] = c;
                result[n-1] = c;
                cout<<result<<"\n";
            }
        }
        else
        {
            if(n < 3 || s[1] == 'z')
            {
                cout<<-1<<"\n";
            }
            else
            {
                string result(n, 'o');
                result[0] = 'z';
                result[1] = s[1] + 1;
                result[n-1] = 'z';
                cout<<result<<"\n";
            }
            
        }
    }
    return 0;
}
