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
    int a,b,c;
    cin>>a>>b>>c;

    bool flag = false;
    int sum = a+b+c;
    if(sum%9!=0)
    {
        flag = true;
    }
    else
    {
        int d = sum/9;
        int m = min(a,min(b,c));

        if(m < d)
        {
            flag = true;
        }
                
    }
    
    if(flag)
    cout<<"NO\n";
    else
    cout << "YES\n";
    

}
return 0;
}