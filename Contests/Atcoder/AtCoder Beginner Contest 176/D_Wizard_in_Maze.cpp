#include<bits/stdc++.h>
using namespace std;
char ar[1002][1002];
pair<long long,bool> magic(char ar[1002][1002],int r,int c,int &Ch,int &Cw,int &H,int &W)
{   
    cout<<"r: "<<r<<" c: "<<c<<endl;
    if(r < 1)
    return {-1,0};
    if(r>H)
    return {-1,0;
    if(c<1)
    return {-1,0};
    if(c>W)
    return {-1,0};
    
    if(r==Ch && c==Cw)
    return {0,1};
    if(ar[r][c] == '#')
    return {-1,0};
    
    vector<pair<long long,bool>> a(8);
    long long m=0;int pos=-1;
    a[0]=magic(ar,r-1,c,Ch,Cw,H,W);
    a[1]=magic(ar,r,c-1,Ch,Cw,H,W);
    a[2]=magic(ar,r+1,c,Ch,Cw,H,W);
    a[3]=magic(ar,r,c+1,Ch,Cw,H,W);
    a[4]=magic(ar,r-2,c,Ch,Cw,H,W);
    a[5]=magic(ar,r,c-2,Ch,Cw,H,W);
    a[6]=magic(ar,r-2,c-2,Ch,Cw,H,W);   
    a[7]=magic(ar,r+2,c,Ch,Cw,H,W);
    a[8]=magic(ar,r,c+2,Ch,Cw,H,W);
    a[9]=magic(ar,r+2,c+2,Ch,Cw,H,W);
    for(int i=0;i<10;i++)
    {
        if(a[i].first < m && a[i].first>-1)
         {m = a[i];
         pos = i;
         }
    }
    if(pos>3)
    return m+1;
    if(pos == -1)
    return -1;
    return m;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int H,W,Ch,Cw,Dh,Dw;

cin>>H>>W;
cin>>Ch>>Cw;
cin>>Dh>>Dw;
for(int i=0;i<H;i++)
{
    for(int j=0;j<W;j++)
    {
        cin>>ar[i][j];
    }
}

// for(int i=0;i<H;i++)
// {
//     for(int j=0;j<W;j++)
//     {
//         cout<<ar[i][j]<<' ';
//     }
//     cout<<endl;
// }

cout<<magic(ar,Dh,Dw,Ch,Cw,H,W)<<endl;

return 0;
}