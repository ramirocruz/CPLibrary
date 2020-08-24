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
    int n;
    cin>>n;
    vector<long long> a(n),b(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];

   long long amin= *min_element(a.begin(),a.end());
   long long bmin= *min_element(b.begin(),b.end());
   long long steps =0;
   for(int i=0;i<n;i++)
   {
       if(a[i] > amin && b[i] > bmin)
       {
         steps +=  max(a[i]-amin,b[i]-bmin);  
       }
       else if(a[i] > amin)
            steps += a[i] - amin;
       else if(b[i] > bmin)
            steps += b[i] - bmin;
   }
cout<<steps<<endl;
}

return 0;
}