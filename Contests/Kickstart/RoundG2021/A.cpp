#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int n, d,c,m;
    int M = 1e8;
    cin >> n >> d >> c >> m;
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'D')
        {
            if(d == 0)
                return false;
            d--;c = (c + m)%M;
        }
        else
        {
            if(c == 0)
            {
                while(i < n)
                {
                    if(s[i] == 'D')
                        return false;
                    i++;
                }
            }
            c--;
        }
    }
    return true;
}
int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("D:\\Study\\CPLibrary\\IO\\input.txt","r",stdin);
freopen("D:\\Study\\CPLibrary\\IO\\output.txt","w",stdout);
#endif 
int t;
cin >> t;
for(int i=1;i<=t;i++)
{
    cout << "Case #"<<i<<": ";
    if(solve())
    {
        cout <<"YES\n";
    }
    else
    {
        cout << "NO\n";
    }

}
return 0;
}