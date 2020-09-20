#include<bits/stdc++.h>
using namespace std;

/*
This algo is used to find cycles in a graph or given list of edges.
We consider every node its own parent then update their parent once the set starts combining.
If 2 sets are merged we update only the parent of both parents in the set.
For checking, whether the two nodes have same parents we loop through till we find the main parent in each set.
Then we compare both the parent.

If two nodes are in same component and also both have already appeared then cycle is present.

*/

bool solve(vector<vector<int>>& edges) {
        unordered_map<int,int>nodes;
        for(int i=0;i<edges.size();i++)
        {
            if(nodes.find(edges[i][0])!=nodes.end()  && nodes.find(edges[i][1])!=nodes.end())
             {
                 cout<<"here1\n";
              int a=edges[i][0],b=edges[i][1];
              while(nodes[a]!=a)
              {
                  a=nodes[a];
              }
              while(nodes[b]!=b)
              {
                  b=nodes[b];
              }
              if(a==b)
              return false;
              
              nodes[b]=a;
              
             }
             else if(nodes.find(edges[i][0])!=nodes.end())
             {
                 cout<<"here2\n";
                 nodes[edges[i][1]] = nodes[edges[i][0]];
             }
             else if(nodes.find(edges[i][1])!=nodes.end())
             {
                 cout<<"here3\n";
                 nodes[edges[i][0]] = nodes[edges[i][1]];
             }
             else
             {
                 cout<<"here4\n";
                 nodes[edges[i][0]] = edges[i][0];
                 nodes[edges[i][1]] = edges[i][0];
             }
        }
        return true;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cout<<"Hello World!\n";

return 0;
}