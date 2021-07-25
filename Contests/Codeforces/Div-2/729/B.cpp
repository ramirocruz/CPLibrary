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
while (t--)
{
    /* code */
    int n,a,b;
    cin >> n >> a >> b;

    if(a == 1)
    {
        if((n-1)%b == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else
    {
        while(n>1)
        {
            while(n>1 && n%a==0)
                n/=a;
            if(n == 1)
            {
                break;
            }
            int temp = n%a;
            cout << n <<" " << temp << endl;
            while( n - temp >= 1)
            {
                if(temp % b == 0)
                {
                    break;
                }

                temp += a;
                cout << temp << endl;
            }
            n -= temp;
        }

        if(n == 1)
            cout <<"Yes\n";
        else
            cout <<"No\n";
       
        
    }

}

return 0;
}