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
    int sum=0;
    int N;
    cin>>N;
    vector<pair<int,int>>cord(N);
    for(int i=0;i<N;i++)
    {
        cin>>cord[i].first>>cord[i].second;
    }
    while(N>2)
    {
        sum+=N;
        N/=2;
    }
    cout<<max(sum,N)<<endl;
}
return 0;
}