// Kyu bhai, kyu
#include <bits/stdc++.h>
using namespace std;

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
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>

int n, r, l, x, y, c;

int32_t main(){
	l=-1e9;r=1e9;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>x>>y;
		if (y==1) l=max(l,1900-c);
		else r=min(r,1900-c);
		c+=x;
	}
	if (l>=r) cout<<"Impossible"<<endl;
	else if (r==1e9) cout<<"Infinity"<<endl;
	else cout<<r+c-1<<endl;
	return 0;
}