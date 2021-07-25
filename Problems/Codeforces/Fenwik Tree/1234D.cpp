#include<bits/stdc++.h>
using namespace std;
struct BIT
{
    vector<int>bit;
    int n;
    BIT(int s){
        n = s;
        bit.resize(n+1);
    }
    BIT(){}
    void update(int pos,int val)
    {
        pos++;
        for(int i=pos;i<=n;i+= (i&(-i)))
        {
            bit[i]+=val;
        }
    }

    int query(int pos)
    {
        pos++;
        int ans=0;
        for(int i=pos;i>0;i-= (i&(-i)))
        {
            ans += bit[i];
        }
        return ans;
    }
};
void print(BIT &bit)
{
    for(int i=0;i<bit.n;i++)
    {
        cout << bit.query(i) - bit.query(i-1) << " ";
    }
    cout <<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

string s;
cin >> s;
int n = s.size();
BIT *bit = new BIT[26];
for(int i=0;i<26;i++)
{
    bit[i] = BIT(n);
}
for(int i=0;i<n;i++)
{
    bit[s[i]-'a'].update(i,1);
}

// for(int i=0;i<26;i++)
// {
//     cout << (char)(i  + 'a') << endl;
//     for(int j=0;j<n;j++)
//     {
//         cout << bit[i].query(j) <<" ";
//     }
//     cout<<endl;
// }


int q;
cin >> q;
while(q--)
{
    int mode;
    cin >> mode;
    if(mode==1)
    {
        int pos; char val;
        pos--;
        cin >> pos >> val;
        pos--;

        // cout << "Before Update:\n";
        // cout << s[pos] << " \n";
        // print(bit[s[pos] - 'a']);
        // cout << val << " \n";
        // print(bit[val - 'a']);


        bit[s[pos]-'a'].update(pos,-1);
        swap(s[pos],val);
        bit[s[pos]-'a'].update(pos,1);


        // cout << "After Update:\n";
        // cout << val << " \n";
        // print(bit[val - 'a']);
        // cout << s[pos] << " \n";
        // print(bit[s[pos] - 'a']);
        
    }
    else
    {
        int l,r;
        cin >> l >> r;
        l--,r--;
        int count =0;
        for(int i=0;i<26;i++)
        {
            count += (bool) (bit[i].query(r) - bit[i].query(l-1));
        }
        cout << count << endl;
    }
}   

delete[] bit;
return 0;
}