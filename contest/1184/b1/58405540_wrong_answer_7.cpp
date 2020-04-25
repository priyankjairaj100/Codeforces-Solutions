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
auto cmp = [](pair<int, pii> a, pair<int, pii> b) {
	if(a.first == b.first) return a.second.first > b.second.first;
	return a.first < b.first;
};
multiset<pair<int, pii>, decltype(cmp)> st(cmp), stt(cmp);
/*__________________________________________*/ 

 
int32_t main(){
	fastio
	int s, b;
	cin >> s >> b;
	int a[s+1];
	rep(i,1,s,1) cin >> a[i];
	int pre[b+1]; memset(pre, 0, sizeof(pre));
	rep(i,1,b,1){int d, g; cin >> d >> g; st.insert({d,{g, 0}});}
	int id = 1;
	for(auto c: st){pre[id] = pre[id-1] + c.second.first; stt.insert({c.first, {c.second.first, pre[id]}}); id++;}
	rep(i,1,s,1){
		auto x = stt.lower_bound({a[i]+1, {MOD,0}});
		--x;
		int id = (*x).second.second;
		cout << id << " ";
	}
    return 0; 
}