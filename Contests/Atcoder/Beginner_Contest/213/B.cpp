#include <bits/stdc++.h>
using namespace std;

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("D:\\Study\\CPLibrary\\IO\\input.txt","r",stdin);
freopen("D:\\Study\\CPLibrary\\IO\\output.txt","w",stdout);
#endif 
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;
int msize  = 2;
int n ;
cin >> n;
vector<int>ar(n);
for(int i=0;i<n;i++)
    cin >> ar[i];
for(int i=0;i<n;i++)
{
    if(minheap.size() < msize)
    {
        minheap.push({ar[i],i});
    }
    else
    {
        if(ar[i] > minheap.top().first)
        {
            minheap.pop();
            minheap.push({ar[i],i});
        }
    }
}

cout << minheap.top().second + 1 <<endl;

return 0;
}
