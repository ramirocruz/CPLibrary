#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,x,y;
cin>>a>>b>>x>>y;
int diff = a - b;

int res;
if(diff > 0)
{
    res = min((2*diff - 1)*x , y*(diff - 1) + x);

}
else if(diff < 0 )
{
    diff = -diff;
    res = min((2*diff + 1)*x,y*diff + x);
}
else
{
    res = x;
}
cout<<res<<endl;

return 0;
}