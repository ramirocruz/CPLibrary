#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;
vector<pair<int,int>> A(n);
for(int i=0;i<n;i++)
{
    int x,y;
    cin >> x >> y;
    A[i] = {x,y};
}

sort(A.begin(),A.end());
bool flag = false;
for(int i=0;i<n-1;i++)
{
    if(A[i].second > A[i+1].second)
        {
            flag = true;
            break;
        }
}
if(flag)
    cout << "Happy Alex\n";
else
    cout << "Poor Alex\n";

return 0;
}