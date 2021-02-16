#include<bits/stdc++.h>
using namespace std;

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>ar(n);
for(int i=0;i<n;i++)
{
    cin>>ar[i];
}
vector<int>ans(n);
ans[0]=1;

for(int i=0;i<n;i++)
{
    ans[i]=1;
    int res=ans[i];
    for(int j=i-1;j>-1;j--)
    { 
      
      if(ar[j] < ar[i] and ans[j]>ans[i])
      {
          int m=ans[j]+1;
          res=max(res,m);
      }

    }
    ans[i]=res;
}
for(int i=0;i<n;i++)
{
    cout<<ans[i]<<' ';
}
cout<<endl;

return 0;
}