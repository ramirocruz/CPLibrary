#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int t,ar[1002],totalfight[1002];
vector<int>count(101,0);
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
     cin>>ar[i];
    totalfight[0] = 0;
    
     count[ar[0]]++;
    for(int i=1;i<n;i++)
    {   count[ar[i]]++;
        if(count[ar[i]]>1)
        totalfight[i] = totalfight[i-1]+1;
        else
        {
            totalfight[i] = totalfight[i-1];
        }
        
    }
 int e=k+totalfight[n-1];
 for(int i=0;i<n;i++)
 {
     
 }
}
return 0;
}