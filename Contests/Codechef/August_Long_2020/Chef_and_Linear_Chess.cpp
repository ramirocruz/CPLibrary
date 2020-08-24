#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int t;
int ar[1002];
cin>>t;
while (t--)
{
    long long n,k;
    cin>>n>>k;
   
    for(int i=0;i<n;i++)
    cin>>ar[i];
    
    long long min = 1000000001,pos;
    for(int i=0;i<n;i++)
    {
        if(ar[i] > k)
        continue;
        if(k%ar[i] == 0)
        {   
            if((k/ar[i]) < min)
            { min = k/ar[i];
             pos = i;
            }
        }

    }
    // cout<<pos<<endl;
    if(min == 1000000001)
    cout<<"-1\n";
    else
    {
        cout<<ar[pos]<<endl;
    }
    
}


return 0;
}