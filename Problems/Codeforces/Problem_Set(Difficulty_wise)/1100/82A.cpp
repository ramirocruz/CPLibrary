#include<bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

vector<string>v = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
int n;
cin >> n;
int cnt=1;
int ans=0;
int pos =-1;
while(ans < n)
{
    for(int i=0;i<5;i++)
    {
        ans+=cnt;
        if(ans >= n)
        {
            pos = i;
            break;
        }
    }
    cnt = cnt<<1;
}

cout << v[pos] << endl;


return 0;
}