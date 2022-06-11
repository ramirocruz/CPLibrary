/*
https://www.codechef.com/SNCKQL21/problems/TESTSERIES
*/
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
cin >> t;
while(t--)
{
    int fcount[3] = {0};
    int x =0;
    for(int i=0;i<5;i++)
    {
        cin >> x;
        fcount[x]++;
    }
    if(fcount[1] == fcount[2])
    {
        cout <<"DRAW\n";
    }
    else if(fcount[1] > fcount[2])
    {
        cout <<"INDIA\n";
    }
    else
    {
        cout <<"ENGLAND\n";
    }
}
return 0;
}