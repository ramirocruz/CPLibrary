#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
unsigned long long ar[101];
int n,count =0;
cin>>n;
for(int i=0;i<n;i++)
cin>>ar[i];

for(int i=0;i<n-2;i++)
{
    for(int j=i+1;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++)
        {   

        bool temp = (((ar[i]!=ar[j]) && (ar[i] != ar[k]) && (ar[k] != ar[j]))&&(ar[i] + ar[j] > ar[k]) && (ar[i] + ar[k] > ar[j]) && (ar[j] + ar[k] > ar[i]));

            if(temp)
             count++;
        //  cout<<ar[i]<<" : "<<ar[j]<<" : "<<ar[k]<<endl;
        }
    }
}
cout<<count<<endl;

return 0;
}