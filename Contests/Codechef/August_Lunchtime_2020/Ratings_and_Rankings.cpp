#include<bits/stdc++.h>
using namespace std;
int ar[501][501],P[501],realar[501][501],R[501][501];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int T;
cin>>T;
while (T--)
{
    int N,M;
    cin>>N>>M;
     for(int i=0;i<N;i++)
    {
        cin>>P[i];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>ar[i][j];
        }
    }
    vector<int>best_rating_month(N),best_ranking_month(N);

    for(int i=0;i<N;i++)
    {
        int sum=P[i];
        int max = 0;
        int pos=0;
        for(int j=0;j<M;j++)
        {   
            sum+=ar[i][j];
            realar[i][j] = sum;
            if(sum > max)
            {
                max = sum;
                pos=j;
            }
          
        }
        best_rating_month[i]=pos;
    }
    for(int j=0;j<M;j++)
    {
        map<int,int,greater<int>>rank;
        for(int i=0;i<N;i++)
        {
           rank[realar[i][j]]++;
        }
    
        // for(auto r:rank)
        // cout<<r.first<<" "<<r.second<<endl;
        unordered_map<int,int>realrank;
        for(int i=0;i<N;i++)
        {
            int current=1;
           for(auto a:rank)
           {              
               int count =a.second;
                            
               realrank[a.first]=current;                   
               
               current+= a.second;
           }
           
           R[i][j] = realrank[realar[i][j]];
        }


    }
    for(int i=0;i<N;i++)
    {
       
        int min = N+1;
        int pos=0;
        for(int j=0;j<M;j++)
        {   
            
            if(R[i][j] < min)
            {
                min = R[i][j];
                pos=j;
            }
          
        }
        // cout<<"pos:"<<pos<<endl;
        best_ranking_month[i]=pos;
    }
    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<M;j++)
    //     cout<<R[i][j]<<" ";
    //     cout<<endl;
    // }
    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<M;j++)
    //     cout<<realar[i][j]<<" ";
    //     cout<<endl;
    // }
    // cout<<"best rating:\n";
    // for(auto a:best_rating_month)
    // cout<<a<<" \n";
    // cout<<"BBB"<<endl;
    // cout<<"best ranking: \n";
    // for(auto a:best_ranking_month)
    // cout<<a<<" \n";

    // cout<<"RRR\n";
 int count=0;
    for(int i=0;i<N;i++)
    {
       if(best_rating_month[i] != best_ranking_month[i])
       count++;
    }
cout<<count<<endl;


}


return 0;
}