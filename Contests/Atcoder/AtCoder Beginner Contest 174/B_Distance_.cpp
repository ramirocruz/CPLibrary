#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int N,count=0;long long D;
cin>>N>>D;

vector<long long> X(N),Y(N);


for(int i=0;i<N;i++)
{
    cin>>X[i]>>Y[i];
}
D*=D;
for(int i=0;i<N;i++)
{
    if((X[i]*X[i] + Y[i]*Y[i]) <= D)
    count++;
}
cout<<count<<endl;
return 0;
}