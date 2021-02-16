#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


int  H,W,M;
cin>>H>>W>>M;

vector<pair<int,int>>items(M);
vector<int>Hcount(H),Wcount(W);

int Hmax=-1,Wmax=-1;

for(int i=0;i<M;i++)
{
   cin>>items[i].first>>items[i].second;
}

for(int i=0;i<M;i++)
{   
     items[i].first--;
     items[i].second--;
    Hcount[items[i].first]++;
    Wcount[items[i].second]++;

    Hmax= max(Hmax,Hcount[items[i].first]);
    Wmax= max(Wmax,Wcount[items[i].second]);

}


int  ans = Hmax + Wmax;
int Hmaxcount=0,Wmaxcount=0;
for(int i=0;i<H;i++)
{
      if(Hcount[i] == Hmax)
       Hmaxcount++;
         
}
for(int i=0;i<W;i++)
{
      if(Wcount[i] == Wmax)
        Wmaxcount++;
    
}
long long total_common_space = (long long)Hmaxcount*Wmaxcount;
long long total_common_item = 0;

for(int i=0;i<M;i++)
{
    if((Hcount[items[i].first]==Hmax) && (Wcount[items[i].second]== Wmax))
    {
        total_common_item++;
    }
}
/*
If all the cross sections of Hmax and Wmax are filled with elements 
then that means the answer cannot be Hmax + Wmax, as one common element
will always be counted one extra time.
Thus we have to find a cross section with no element present.
that is why total_common_item < total_common_space for ans = Hmax + Wmax
else ans = Hmax + Wmax -1
*/

if(total_common_item >= total_common_space)
     { ans--;}

cout<<ans<<endl;
return 0;

}