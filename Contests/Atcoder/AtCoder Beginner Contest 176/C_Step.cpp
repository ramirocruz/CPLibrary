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
vector<long long>a(n);
for(int i=0;i<n;i++)
cin>>a[i];
// vector<int>max(n);
// max[0] = a[0];
long long sum =0;
long long m = a[0];
for(int i=1;i<n;i++)
{
    if(a[i] > m)
       m = a[i];
    sum+= m - a[i];

}
cout<<sum<<endl;
return 0;
}