#include<bits/stdc++.h>
using namespace std;
int count_row[3000]={0},count_col[3000]={0};
static long long dpar[3001][3001];
int max_item(long long ar[3000][3000],int n,int m)
{
   
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            dpar[i][j] = ar[i-1][j-1] + max(dpar[i-1][j],dpar[i][j-1]);
        }
    }
    return dpar[n][m];
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
static long long ar[3000][3000];
int r,c,k;
cin>>r>>c>>k;
int x,y,val;
for(int i=0;i<k;i++)
{
    cin>>x>>y>>val;
    ar[x-1][y-1]=val;
}
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cout<<ar[i][j]<<' ';
    }
    cout<<endl;
}
cout<<max_item(ar,r,c);
cout<<endl;
return 0;
}