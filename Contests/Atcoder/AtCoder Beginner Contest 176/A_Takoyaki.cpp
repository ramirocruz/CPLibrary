#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int N,X,T;
cin>>N>>X>>T;

int steps = N/X;
bool extra = N%X;
cout<<(steps+extra)*T<<endl;

return 0;
}