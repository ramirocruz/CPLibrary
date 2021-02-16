#include<bits/stdc++.h>
using namespace std;
pair<int,int>items[300001];
int Hcount[300001]={0},Wcount[300001]={0};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int  H,W,M;
cin>>H>>W>>M;
set<long long> present;

for(int i=0;i<M;i++)
{
   cin>>items[i].first>>items[i].second;
}

for(int i=0;i<M;i++)
{
    Hcount[items[i].first - 1]++;
    Wcount[items[i].second - 1]++;
    present.insert((long long)((items[i].first -1) + (long long)(items[i].second -1) * H));
}
int posH = max_element(Hcount,Hcount+H) - Hcount;
int posW = max_element(Wcount,Wcount+W) - Wcount;

int  ans = Hcount[posH] + Wcount[posW];
if(present.find(posH + (long long)posW * H) != present.end())
 ans--;
cout<<ans<<endl;
return 0;
}