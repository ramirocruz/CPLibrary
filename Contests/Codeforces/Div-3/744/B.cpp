#include <bits/stdc++.h>
using namespace std;

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("D:\\Study\\CPLibrary\\IO\\input.txt","r",stdin);
freopen("D:\\Study\\CPLibrary\\IO\\output.txt","w",stdout);
#endif 

int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
        cin >> ar[i];
    
    vector<int>sar = ar;
    sort(sar.begin(),sar.end());
    string ans;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=i;j<n;j++)
        {
            if(sar[i] == ar[j])
            {
                if(i == j)
                    continue;
                ans+= to_string(i+1) +" "+to_string(j+1) +" "+to_string(j - i) + "\n";
                int temp;
                temp = ar[j];
                cnt++;
                for(int ii = j;ii>i;ii--)
                {
                    ar[ii] = ar[ii - 1];
                }
                ar[i] = temp;
                break;
            }
        }
    }
    cout << cnt << endl;
    cout << ans;
}
return 0;
}