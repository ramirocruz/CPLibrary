#include<bits/stdc++.h>
using namespace std;

int lcs(string &s0,string &s1,vector<vector<int>>&dp,int i,int j,int&ans)
{
    if(i<0 || j<0)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    int len = lcs(s0,s1,dp,i-1,j-1,ans);
    lcs(s0,s1,dp,i,j-1,ans);
    lcs(s0,s1,dp,i-1,j,ans);
    if(s0[i] == s1[j])
    {
        dp[i][j] = len + 1;
        ans = max(ans,dp[i][j]);
        return dp[i][j];
    }
    dp[i][j] = 0;
    return 0;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int t;
cin >> t;
while ( t--)
{
    string a,b;
    cin >> a >> b;
    int n = a.size(),m = b.size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    int ans=0;
    lcs(a,b,dp,n-1,m-1,ans);
    cout << (n+m) - (2 * ans) << endl;
}

return 0;
}