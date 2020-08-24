#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int t;
cin>>t;
while(t--)
{
    int p,r;
    cin>>p>>r;
    int pd = p/9 + (bool)(p%9);
    int rd = r/9 + (bool)(r%9);
    if(pd<rd)
    cout<<"0 "<<pd<<endl;
    else
    {
        cout<<"1 "<<rd<<endl;
    }
    
}

return 0;
}