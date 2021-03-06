//IWNLA
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
typedef long double LD;
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,greater<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
//auto cmp = [](pii a, pii b) { return a.first > b.first; };
//multiset<pii, decltype(cmp)> s(cmp);
/*__________________________________________*/
 
const int N = 150005;
int n;
int par[N], a[N];
vector <int> val[N], vi[N], z = 0;
 
int root(int v){return par[v] < 0 ? v : (par[v] = root(par[v]));}
 
void merge(int x,int y){
    if((x = root(x)) == (y = root(y))) return;
	if(vi[x] > vi[y]) swap(x, y);
	par[y] = x;
	val[x].insert(val[x].end(), val[y].begin(), val[y].end());
	val[y].clear();
}
 
int32_t main(){
	fastio
	cin >> n;
	rep(i,1,n,1){
    val[i].pb(i);
	par[i] = -1;
	}
	rep(e,1,n-1,1){
		int x, y;
		cin >> x >> y;
		if(!vi[x]) vi[x] = ++id; 
		if(!vi[y]) vi[y] = ++id;
		merge(x, y);
	}
	for(auto s: val[root(1)]) cout << s << " ";
    return 0; 
}