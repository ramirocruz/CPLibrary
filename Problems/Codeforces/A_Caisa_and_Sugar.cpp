#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 //freopen("input.txt", "r", stdin); 
 //freopen("output.txt", "w", stdout); 

 int n,s,d[100],c[100],ans=0;
 cin>>n>>s;
 s*=100;
 for(int i=0;i<n;i++)
 {
     cin>>d[i]>>c[i];
 }
 for(int i=0;i<n;i++)
 {
     d[i] = d[i]*100 + c[i];
 }
 sort(d,d+n);
 int i=n-1;
 for(;i>-1;i--)
 {
     if(d[i] <= s)
     break;
 }
 if(i==-1)
 ans =-1;
 else
 {
     for(;i>-1;i--)
     {
         if((100 - d[i]%100)%100 > ans)
         ans = (100 - d[i]%100)%100;
     }
 }
 cout<<ans<<endl;
return 0;
}