#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>1
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////

const int N = 2005;
int n;
int c[N], k[N], x[N], y[N];

int dist[N], parent[N];
bool vis[N];
vector<pair<int, int> > g[N], tree[N];

int primsMST(int source) //Finds the cost and makes the MST
{
	for(int i=0;i<=n;i++)
		dist[i]=1e18;
	set<pair<int, int> > s;
	s.insert({0, source});
	int cost=0;
	dist[source]=0;
	while(!s.empty())
	{
		auto x = *(s.begin());
		s.erase(x);
		vis[x.second]=1;
		cost+=x.first;
		int u=x.second;
		int v=parent[x.second];
		int w=x.first;
		tree[u].push_back({v, w});
		tree[v].push_back({u, w});
		for(auto it:g[x.second])
		{
			if(vis[it.first])
				continue;
			if(dist[it.first] > it.second)
			{
				s.erase({dist[it.first], it.first});
				dist[it.first]=it.second;
				s.insert({dist[it.first], it.first});
				parent[it.first]=x.second;
			}
		}
	}
	return cost;
}

int dd(int i, int j){
    return (k[i] + k[j]) * (abs(x[i] - x[j]) + abs(y[i] - y[j]));
}

int32_t main(){
    fastio
    cin >> n;
    rep(i,1,n,1) cin >> x[i] >> y[i];
    rep(i,1,n,1) cin >> c[i];
    rep(i,1,n,1) cin >> k[i];

    rep(i,1,n,1) rep(j,1,n,1) if(i != j) g[i].pb({j, dd(i, j)}), g[j].pb({i, dd(i, j)});
    rep(i,1,n,1) g[i].pb({0, c[i]}), g[0].pb({i, c[i]});
    
    cout <<primsMST(0)<<endl;

    set <int> y;
    for(auto x: tree[0]) if(x.first) y.insert(x.first);
    cout << y.size() << endl;
    for(auto x: y) cout << x << " ";
    cout << endl;
    
    set <pii> v;
    rep(i,1,n,1){
        for(auto x: tree[i]){
            if(x.first == 0) continue;
            v.insert({min(i, x.first), max(i, x.first)});
        }
    }
    cout << v.size() << endl;
    for(auto x: v) cout << x.first << " " << x.second << endl;
    return 0; 
}