#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
unordered_map<int,int>mp,mp2;
int n;
cin >> n;
for(int i=0;i<n;i++)
{
    int x;
    cin >> x;
    mp[x]++;
}
for(int i=0;i<n-1;i++)
{
    int x;
    cin >> x;
    mp2[x]++;
    mp[x]--;
    if(mp[x]==0)
        mp.erase(x);
}
int first = mp.begin()->first;
for(int i=0;i<n-2;i++)
{
    int x;
    cin >> x;
    mp2[x]--;
    if(mp2[x] == 0)
        mp2.erase(x);

}
int second = mp2.begin()->first;
cout<<first<<endl<<second<<endl;

return 0;
}