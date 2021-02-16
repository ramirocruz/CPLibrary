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
while (t--)
{
    
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    
    int median;
    if(n&1)
    {
        nth_element(ar.begin(),ar.begin()+n/2,ar.end());
        median = ar[n/2];
    }
    else
    {
        nth_element(ar.begin(),ar.begin()+n/2,ar.end());
        nth_element(ar.begin(),ar.begin()+(n-1)/2,ar.end());
        median = (ar[n/2] + ar[(n-1)/2])/2;
    }

    for(int i=0;i<n;i++)
        cout << median << " ";
    cout<<endl;
    
    
}


return 0;
}