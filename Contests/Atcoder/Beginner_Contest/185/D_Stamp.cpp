#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int N,M;
cin>>N>>M;
vector<int>ar(M);
for(int i=0;i<M;i++)
    cin>>ar[i];
int k= INT_MAX;
int count=0;
if(M==0)
cout<<1<<endl;
else if(M==N)
cout<<0<<endl;


else
{
    sort(ar.begin(),ar.end());
    for(int i=0;i<M-1;i++)
    {
        int diff = ar[i+1] - ar[i] -1;
        if(diff ==0)
         continue;
        if(diff < k)
        {
            k = diff;
        }
    }
    int diff = ar[0] - 1;
    if(diff != 0 && diff < k)
    {
        k = diff;
    }
    diff = N - ar[M-1];
    if(diff !=0 && diff < k)
    {
        k = diff;
    }

   int prev = 0;
   for(int i=0;i<M;i++)
   {
       int d = ar[i] - prev - 1;
       count += d/k + (bool)(d%k);
    //    cout<<prev<<" : "<<count<<" \n";
       prev = ar[i];
   }
   int d = N - prev;
   count += d/k + (bool)(d%k);

   cout<<count<<endl;

}


return 0;
}