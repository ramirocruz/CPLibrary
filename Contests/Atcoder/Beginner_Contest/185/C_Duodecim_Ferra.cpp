#include<bits/stdc++.h>
using namespace std;

unsigned long long calcncr(unsigned long long n,unsigned long long r)
{
    unsigned long long a=1,b=1;
    while(r)
    {
        a*=n;
        b*=r;
        unsigned long long gcd = __gcd(a,b);
        a/=gcd;
        b/=gcd;
        n--;
        r--;
    }

    return a;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

unsigned long long L;
cin>>L;
cout<<calcncr(L-1,11)<<endl;

return 0;
}