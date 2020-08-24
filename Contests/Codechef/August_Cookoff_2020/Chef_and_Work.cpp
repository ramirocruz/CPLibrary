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
    int N,K;
    cin>>N>>K;
    vector<int>ar(N);
    for(int i=0;i<N;i++)
    {
        cin>>ar[i];
    }
    int currentpos = 0;
    int sum,steps =0;
    for(int i=0;i<N;i++)
    {   currentpos = i;
        sum = ar[i];
        bool flag = 0;
        // cout<<"IN\n";
        while(i<N && sum <=  K)
        {
            flag = true;
            // cout<<ar[i]<<" "<<sum<<endl;
            i++;
            sum += ar[i];
        }
        // cout<<"OUT\n";
        // cout<<ar[i]<<" "<<sum<<endl;
        // cout<<i<<" "<<currentpos<<endl;
        
         if(i == currentpos)
        {
            steps =0;
            break;
        }
       
        if(flag)
        {steps++;i--;}

        
       

    }
    if(steps)
    cout<<steps<<endl;
    else
    {
        cout<<-1<<endl;
    }
    
}

return 0;
}