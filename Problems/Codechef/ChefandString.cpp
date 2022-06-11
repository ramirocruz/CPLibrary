#include <bits/stdc++.h>
using namespace std;

long long factmod(long long n)
{
    long long res = 1;
    for(long long i = 1;i <= n;i++)
    {
        res = res *     
    }
}
long long C(int n,int r)
{
    for(int i=0;i<=n;i++)
    {

    }
}
void  update_count(string s,vector<long long>&subcount)
{
    // cout << s << endl;
    int n = s.size();
    vector<int>z(n);
    for(int i=1,r=0,l=0; i < n;i++)
    {
        if(i <= r)
        {
            z[i] = min(z[i - l],r - i + 1);
        }
        while( z[i] + i < n && s[z[i]] == s[z[i] + i])
        {
            z[i]++;
        }
        if(z[i] + i - 1 > r)
        {
            l = i;
            r = z[i] + i - 1;
        }

    }
    z[0] = n;
    vector<int>diff(n+2);
    for(auto &x:z)
    {
        // cout << x <<" ";
        if(x)
        {
            diff[1]++;
            diff[x+1]--;
        }
    }
    // cout << endl;
    vector<int>fcount(n+1);
    int len = 0;
    for(int i=1;i< n+2;i++)
    {
        fcount[i-1] = len;
        len += diff[i];
    }
    
    for(int i = 1;i <= n ;i++)
    {
        subcount[fcount[i]]++;
    }

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
// cin >> t;
t = 1;
while(t--)
{
    // int n,q;
    // cin >> n >> q;
    string s;
    cin >> s;

    int n = s.size();
    vector<long long>subcount(n+1);
    for(int i=0;i<n;i++)
    {
        
        update_count(s.substr(i),subcount);
    }
    long long tempsum = subcount[n];
    for(int i = n-1;i > 0;i--)
    {
        subcount[i] -= tempsum;
        tempsum += subcount[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout << i <<" " << subcount[i] << endl;
    }
    
}
return 0;
}