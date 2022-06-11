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

string s;
cin >> s;
int n = s.size();
vector<int> z(n);

for(int i=1,l=0,r=0;i < n;i++)
{
    if(i <= r)
    {
        z[i] = min(z[i-l],r - i + 1);
    }
    while(z[i] + i < n && s[z[i]] == s[z[i] + i])
    {
        z[i]++;
    }
    if(i + z[i] - 1 > r)
    {
        l = i;
        r = i + z[i] - 1;
    }
}
for(auto &x:z)
{
    cout << x <<" ";
}
cout << endl;
int max_z = 0, res = 0;
for(int i =1;i<n;i++)
{
    if(i + z[i] == n && max_z >= z[i])
    {
        res = z[i];
        break;
    }
    max_z = max(max_z,z[i]);
}

if(res)
{
    cout << s.substr(0,res) << endl;
}
else
{
    cout << "Just a legend\n";
}

return 0;
}