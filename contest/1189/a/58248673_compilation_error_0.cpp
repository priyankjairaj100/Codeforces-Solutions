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
#define fastio                        \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);                    \
cout.tie(NULL);
#define ordered_set tree<int, null_type,greater<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>
//auto cmp = [](int a, int b) { return ... };
// set<int, decltype(cmp)> s(cmp);
/*__________________________________________*/


int32_t main(){
    fastio
	int n; string s; cin >> n >> s;
	int x = 0;
	rep(i,0,n-1,1) if(s[i] == 1) x++;
	if(2*x == n){ cout<<2<<endl; cout<<s[0]<<" "<<s.substring(1,n-1);}
	else cout<<"1"<<endl<<s<<endl;
    return 0;
}