#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int t;
cin >> t;
while( t--)
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    int ocount=0,ecount =0;
    for(int i=0;i<n;i++)
    {
        if(v[i]&1)
            ocount++;
        else
            ecount++;
    }
    if((ocount&1) ^ (ecount&1))
        cout << "NO\n";
    else
    {
        if((ocount&1) == 0)
            cout << "YES\n";
        else
        {
            sort(v.begin(),v.end());
            for(int i=0;i<n-1;i++)
            {
                if(v[i] + 1 == v[i+1])
                {
                    cout << "YES\n";
                    goto label;
                }
            }
            cout << "NO\n";
        }
        
        label:;
    }
}
return 0;
}