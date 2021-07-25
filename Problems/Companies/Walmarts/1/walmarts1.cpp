/*
On the occasion of Republic day, the D2C Society organized a code-essay competition.  The winners were decided by a special score which is the sum of the squares of maximum common prefix length of all possible pairs of words in the essay. So, to win the prize you need to find this special score.

Since the score can be large, print it modulo 10^9+7.

Input Format
The first line contains the number n (1≤n≤100000) - the total number of words in the essay.

Next n lines follow. For each i (1≤i≤n) , the i th of these lines contains a single word

Si(1≤|Si|≤100000).

All words consist only of lowercase English letters and sum of the length of all strings does not exceed 100000.

Output Format
Print a single integer - the sum of the squares of maximum common prefix length of all possible pairs of words in the essay modulo 10^9 +7.



Sample Testcase #0
Testcase Input
8
constitution
is
sovereign
democratic
secular
socialist
republic
country
Testcase Output
10
Explanation
In {constitution,country} the sum of the squares of maximum common prefix length is 4, {sovereign,secular} is 1, {sovereign,socialist} is 4,{secular,socialist} is 1.

So total : 4+1+4+1 =10.

Sample Testcase #1
Testcase Input
4
india
republic
and
independent
Testcase Output
9

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct TrieNode
{
    bool isend;
    vector<TrieNode*>next;
    TrieNode()
    {
        next.resize(26);
        isend = false;
    }
};
struct Trie
{
    TrieNode * root;
    void add_helper(TrieNode* root,string &s,int i)
    {
        if(i==s.size())
        {
            root->isend = true;
            return;
        }
           
        if(root->next[s[i] - 'a'] == NULL)
            root->next[s[i] - 'a'] = new TrieNode();
        
        add_helper(root->next[s[i] - 'a'],s,i+1);
    }    

    public:
    
    Trie() {
        root = new TrieNode();
    }

    ~Trie()
    {
        del(root);
    }

    void add(string s) {
        add_helper(root,s,0);
    }

    bool exists(string word) {
        return check(root,word,0);
    }

    bool startswith(string p) {
        return checkprefix(root,p,0);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    #ifndef ONLINE_JUDGE
    freopen("D:\\Study\\CPLibrary\\IO\\input.txt","r",stdin);
    freopen("D:\\Study\\CPLibrary\\IO\\output.txt","w",stdout);
    #endif

    int n ;
    cin >> n;
    vector<string>ar(n);
    for(int i=0;i<n;i++)
        cin >> ar[i];
    
    int ans =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int len =0 ;
            for(int k=0;k < ar[i].size() && k < ar[j].size() ; k++)
            {
                if(ar[i][k] != ar[j][k])
                    break;
                len++;
            }
            ans += len*len;
        }
    }
    cout <<"The answer is: ";
    cout << ans << endl;
    // int n,ans=0;
    // cin>>n;
    // vector<string> arr(n);
    // vector<string> match;
    // for(int i=0;i<n;++i)
    // cin>>arr[i];
    // sort(arr.begin(),arr.end());
    // //  for(string mm:arr) cout<<mm<<endl;
    // string compre=arr[0];
    // match.push_back(compre);
    // for(int i=1;i<n;i++)
    // {
    //     // cout<<arr[i]<<" "<<compre[0]<<endl;
    //     if(arr[i][0]==compre[0])
    //     {
    //         match.push_back(arr[i]);
    //     }
    //     else // rinse match and calculate ans;
    //     {

    //         if(match.size()==1)
    //         {
    //             // compre=arr[i];
    //             match.clear();
    //             match.push_back(arr[i]);
    //         }
    //         else
    //         {
                
    //             int count=0;
    //             sort(match.begin(),match.end());
    //             int m=match.size();
                
    //             // int len = min(match[0].size(),match[m - 1].size());
    //             // string first = match[0], last = match[m - 1];
    //             // while (count < len && first[count] == last[count])
    //             //     count++;

    //             for(int a=0;a<match.size();a++)
    //             {
    //                 for(int b=a+1;b<match.size();b++)
    //                 {
    //                     count=0;
    //                     string first=match[a],last=match[b];
    //                     while (first[count] == last[count])
    //                     count++;
    //                     ans+=count*count;
    //                 }   
    //             }
                
    //             // cout<<count<<endl;
    //             // ans+=count*count;
    //             match.clear();
    //             match.push_back(arr[i]);
    //             // for(string mm:match) cout<<mm<<endl;
    //         }
    //         // match.clear();
    //     }
    //     compre=arr[i];

    // }

    // // for(string mm:match) cout<<mm<<endl;
    // int count2;
    // if(match.size()>1)
    // {
        
    //     for(int a=0;a<match.size();a++)
    //     {
            
    //         for(int b=a+1;b<match.size();b++)
    //         {
    //             count2=0;
    //             string first=match[a],last=match[b];
    //             while (first[count2] == last[count2])
    //             count2++;
    //             ans+=count2*count2;
    //         }   
    //     }
    // }
    // cout<<ans;

    return 0;
}


