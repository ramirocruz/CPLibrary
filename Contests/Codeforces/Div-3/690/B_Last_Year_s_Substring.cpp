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
    int n;
    string s;
    cin>>n;
    cin>>s;
   
    string left = "",right = "2020";
    bool flag = false;
    // cout<<right.substr(0,1)<<endl;
    for(int i=0;i<5;i++)
    {
        string rightpart;
        if(right.size()==0)
        {
            rightpart = "";
        }
        else
        {
            rightpart = s.substr(n - right.size(),right.size());
        }
        string leftpart = s.substr(0,left.size()) ;
        // cout<<left<<" -- "<<leftpart<<" -- "<<right<<" -- "<<rightpart<<endl;
        if(leftpart == left &&  rightpart == right)
        {
            flag = true;
        }
        left += right[0];
        right.erase(0,1);
    }

    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

return 0;
}