#include<bits/stdc++.h>
using namespace std;
#define MOD (1000000007)

unsigned long long power[500001];
void init()
{
    power[0]=1;
    for(int i=1;i<500001;i++)
    {
        power[i] = (power[i-1]*2)%MOD;
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
init();
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int *ar = new int[n];
    int *count = new int[n+1];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=0;i<n+1;i++)
    {
        count[i] =0;
    }
    bool flag =false;
    for(int i=0;i<n;i++)
    {
        count[ar[i]]++;
        if(count[ar[i]]>1)
        {
            flag = true;
            break;
        }
    }
    if(!flag)
    {
        for(int i=0;i<n;i++)
        {
            cout<<power[(n-i-1)]<<' ';
        }
       
    }

    cout<<endl;

}



return 0;
}