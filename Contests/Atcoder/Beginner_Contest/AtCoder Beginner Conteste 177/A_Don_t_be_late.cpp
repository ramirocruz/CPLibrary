#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
double D,T,S;
cin>>D>>T>>S;
if(D/S <= T)
cout<<"Yes\n";
else
cout<<"No\n";



return 0;
}