#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int T;
cin>>T;
while(T--)
{  
    int N;
    cin>>N;
    vector<int>ar(N);

    for(int i=0;i<N;i++)
    cin>>ar[i];
    vector<int>odd,even;
    for(int i=0;i<N;i++)
    {
        if(ar[i]==0)
        {   int count =0;
            while(i<N && ar[i]==0)
            {
                count++;
                i++;
            }
            i--;
            if(count&1)
            odd.push_back(count);
            else
            even.push_back(count);
        }
    }

    // for(auto a:odd)
    // cout<<a<<" ";
    // cout<<endl;
    //  for(auto a:even)
    // cout<<a<<" ";
    // cout<<endl;
   sort(odd.begin(),odd.end());
   sort(even.begin(),even.end());

   if(odd.size())
   {
       int moves = odd[odd.size()-1];
       odd.pop_back();
       if(odd.size() || even.size())
       {   int moves2=0;
           if(odd.size())
           moves2=odd[odd.size()-1];
           if(even.size())
           {
               moves2 = max(moves2,even[even.size()-1]);
           }
          cout<<moves<<" : "<<moves2<<endl;
           if(moves2 < moves)
           cout<<"Yes\n";
           else
           cout<<"No\n";

       }
       else
       cout<<"Yes\n";
   }
   else
   cout<<"No\n";
   
    

}


return 0;
}