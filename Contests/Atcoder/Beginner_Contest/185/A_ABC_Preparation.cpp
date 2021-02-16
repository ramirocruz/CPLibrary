#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ar[4];
for(int i=0;i<4;i++)
cin>>ar[i];

int min = INT_MAX;
for(int i=0;i<4;i++)
{
    if(ar[i] < min)
        min = ar[i];
}
cout<<min<<endl;


return 0;
}