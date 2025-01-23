/*
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(int i, int n, string &s1, string &s2, ll sum)
{
    if (i == n) return (sum % 2 == 1);
    if (i >= s1.length() || i >= s2.length()) return false;

    int add_1 = 0;
    if (s1[i] == '1')
    {
        add_1 = 1;
    }
    bool option1 = solve(i + 1, n, s1, s2, sum + add_1);
    int add_2 = 0;
    if (s2[i] == '1')
    {
        add_2 = 1;
    }
    bool option2 = solve(i + 1, n, s1, s2, sum + add_2);
    return option1 || option2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        if (s1.length() != n || s2.length() != n)
        {
            cout <<"NO"<<"\n";
            continue;
        }
        if (solve(0, n, s1, s2, 0)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

string solve(string s_1, string s_2)
{
    int n = s_1.length();
    bool flag = false;
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        if (s_1[i] != s_2[i])
        {
            flag = true;
        }
        if (s_1[i] == '1')
        {
            total++;
        }
    }

    if (flag) return "YES";
    else
    {
        if (total % 2 == 1) return "YES";
        else return "NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s_1, s_2;
        cin>>s_1>>s_2;
        cout<<solve(s_1, s_2)<<"\n";
    }
    return 0;
}