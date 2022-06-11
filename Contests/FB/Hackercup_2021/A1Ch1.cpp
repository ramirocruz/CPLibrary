#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    
    return false;
}
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
for(int tc = 1;tc <= t ; tc++)
{
    string s;
    cin >> s;
    int n = s.size();
    int cost = INT_MAX;
    for(char c='A';c<='Z';c++)
    {
        int sum =0;
        for(auto &x:s)
        {
            if(x == c)
                continue;
            else if((isvowel(x) && isvowel(c)) || (!isvowel(x) && !isvowel(c)) )
                sum+=2;
            else 
                sum++;

            
        }
        cost = min(cost,sum);
    }

    cout << "Case #"<<tc<<": "<<cost<<endl;
}
return 0;
}