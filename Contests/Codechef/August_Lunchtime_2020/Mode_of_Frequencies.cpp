#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int T;
cin>>T;
while(T--)
{
    int N;
    unordered_map<int,int>count,fcount;
    cin>>N;
    vector<int>ar(N);
    for(int i=0;i<N;i++)
    cin>>ar[i];

    for(int i=0;i<N;i++)
    count[ar[i]]++;

    for(auto f:count)
    {
        fcount[f.second]++;
    }
    int max1=0,min1=INT32_MAX;
    for(auto f:fcount)
    {
        if(f.second > max1)
        {
            max1=f.second;
          
        }
    }
       for(auto f:fcount)
    {
        if(f.second == max1 && f.first < min1)
        {
            min1=f.first;          
        }
    }

    cout<<min1<<endl;
}

return 0;
}