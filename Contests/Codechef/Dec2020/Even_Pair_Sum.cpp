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

    int A,B;
    cin>>A>>B;

    long long oddA,oddB,evenA,evenB;
    evenA = A/2;
    oddA = A - evenA;
    evenB = B/2;
    oddB = B - evenB;

    long long result = evenA*evenB + oddA*oddB;
    cout<<result<<endl;
}

return 0;
}