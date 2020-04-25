//Author:      Your Name
//Institution: Your Institution

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef long long int lli;
#define loop(i,t) for(i=0;i<t;++i)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    FAST_IO
    lli i,j,k,t,n,x,y,z,temp;
    cin>>n;
    vector<vector<int>> children(n+1);
    vector<int> parent(n+1,0);
    //vector<int> indegree(n+1,0);
    //vector<int> outdegree(n+1,0);
    //parent to children
    loop(i,n-1)
    {
      int node=i+1+1;
      cin>>temp;
      parent[node]=temp;
      children[temp].pb(node);
      //indegree[node]+=1;
      //outdegree[node]+=1;
    }
    int ans=true;
    loop(i,n)
    {
      int node=i+1; //node to consider
      int sprout_count=0;
      for(auto it:children[node])
      {
        if(children[it].empty())
        {
          sprout_count++;
        }
      }
      //cout<<"for "<<node<<" "<<sprout_count<<endl;
      if(sprout_count<3 and children[node].empty()==false) //not leafnode
      {
        ans=false;
        break;
      }
    }
    if(ans)
      cout<<"Yes\n";
    else
      cout<<"No\n";
    return 0;
}

//<> with <3 using termicoder:
//https://termicoder.github.io
