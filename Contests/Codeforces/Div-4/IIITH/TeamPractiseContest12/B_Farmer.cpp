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
for(int i=0;i<t;i++)
{
     long long x[4],y[4],price;

    for(int j=0;j<4;j++)
        cin>>x[j]>>y[j];
    cin>>price;
    
    double area = ((x[0]*y[1] + x[1]*y[2] + x[2]*y[3] + x[3]*y[0]) - (x[1]*y[0] +  x[2]*y[1] + x[3]*y[2] + x[0]*y[3]));
    area/=2;
    area = abs(area);
    area = price/area;
    printf("Case #%d: %0.2lf\n",i+1,area);

}

return 0;
}