#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> &a,pair<int,int>&b)
{
    if(a.first == b.first)
    return a.second < b.second;
    return a.first < b.first;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n;
cin>>n;
vector<pair<int,int>> ar(n);
int a,b;
for(int i=0;i<n;i++)
{
    cin>>a>>b;
    ar[0]={a,b};
}
sort(ar.begin(),ar.end(),comp);
int count =0;
for(int i=0,j=0;i<n && j<n;j++)
{  
     if(ar[i].second <= ar[j].first)
      {
          i++;
          count++;
      }
}
cout<<count<<endl;

return 0;
}