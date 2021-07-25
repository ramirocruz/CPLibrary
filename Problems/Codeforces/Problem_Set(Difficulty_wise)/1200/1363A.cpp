#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
int t;
cin >> t;
while ( t--)
{
    int n,x;
    cin >> n >> x;
    int fcount[2] = {0};
    int temp;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        fcount[(temp&1)]++;
    }

    int m = min(x,fcount[1]);
    if(m%2 == 0)
    {
        m--;
    }

    if(x - m <= fcount[0] && m!=-1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}


return 0;
}