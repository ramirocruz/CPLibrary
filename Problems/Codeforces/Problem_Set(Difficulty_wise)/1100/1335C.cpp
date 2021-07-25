#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// freopen("in.txt","r",stdin);
// freopen("output.txt","w",stdout);
int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    unordered_map<int,int>mp;
    mp.clear();
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int counts=0;
    for(auto &x:mp)
    {
        counts = max(counts,x.second);
    }
    
    if(mp.size() > counts)
    {
        cout << counts << endl;
    }
    else
    {
        cout << min(counts - 1 ,(int) mp.size()) << endl;
    }
}


return 0;
}