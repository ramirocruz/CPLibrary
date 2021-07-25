#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n,m,k;
cin >> n >> m >> k;
vector<int>v(m);
int fedor;
for(int i=0;i<m;i++)
    cin >> v[i];
cin >> fedor;
int count =0;
for ( auto x:v)
{
    int diff =0;
    for(int i=21;i>-1;i--)
    {
        bool x1 = (x&(1<<i));
        bool x2 = (fedor&(1<<i));
        if(x1^x2)
            diff++;
    }
    if(diff <= k)
        count++;
}
cout << count << endl;
return 0;
}