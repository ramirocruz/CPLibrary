#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int t;
cin>>t;
while(t--)
{

int n,m;
cin>>n>>m;
int x,count=0;
int ar[101]={0};
for(int i=0;i<n;i++)
{
    cin>>x;
    ar[x]++;
}
for(int i=0;i<m;i++)
{
    cin>>x;
    ar[x]++;
}
for(int i=0;i<101;i++)
{
    if(ar[i]==2)
        count++;
    
}
cout<<count<<endl;

}


return 0;
}