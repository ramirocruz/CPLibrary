#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int n;
cin>>n;
vector<int> ar(n);
for (int i = 0; i < n; i++)
{
    /* code */
    cin>>ar[i];
}
int median;
if(n&1)
{
nth_element(ar.begin(),ar.begin()+n/2,ar.end());
median = ar[n/2];
}
else{
    nth_element(ar.begin(),ar.begin()+n/2,ar.end());
    nth_element(ar.begin(),ar.begin()+(n-1)/2,ar.end());
    median = (ar[n/2] + ar[(n-1)/2])/2;
}

long long cost=0;
for (int i = 0; i < n; i++)
{
    cost += abs(ar[i] - median);
}

cout<<cost<<endl;


return 0;
}