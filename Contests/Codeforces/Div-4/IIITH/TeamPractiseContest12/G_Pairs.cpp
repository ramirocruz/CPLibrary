#include<bits/stdc++.h>
using namespace std;
#define MOD ((int)1000000007)
long long fastpow(int a,int p)
{
    if(p==0)
        return 1;
    
    long long res = (fastpow(a,p/2))%MOD;
    res = (res * res)%MOD;
    if(p&1)
    {
        return ((a*res)%MOD);
    }

     return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int t;
cin>>t;
for(int k=0;k<t;k++)
{
    int n;
    cin>>n;
    vector<int> ar(n);
    unordered_map<int,int> fcount;
    for(int i=0;i<n;i++)
       { cin>>ar[i];
        fcount[ar[i]]++;
       }
    long long count =0;
    int p = MOD - 2;
    for(int i=0;i<n;i++)
    {
        if(fcount.find(ar[i]) == fcount.end())
            continue;
            
        int inv = fastpow(ar[i],p);
        

        fcount[ar[i]]--;
        if(fcount[ar[i]] <= 0)
            fcount.erase(ar[i]);

        if(fcount.find(inv) == fcount.end())
            continue;
   
        count++;
         
        fcount[inv]--;
        if(fcount[inv] <= 0)
            fcount.erase(inv);

    }
    cout<<"Case #"<<k+1<<": "<<count<<endl;
}
return 0;
}