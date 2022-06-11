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

int t;
cin>>t;
while(t--)
{
    int n;
    cin >>n;

    vector<int>A(n),B(n);
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> B[i];
    }
    int prev = 0;
    for(int i=0;i<n;i++)
    {
        int res = B[i] - max(A[i],prev);
        cout << res <<" ";
        prev = B[i];
    }
    cout << endl;
}
return 0;
}