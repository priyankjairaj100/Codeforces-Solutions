//aho baka
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


int32_t main(){
    fastio
    int i,j,n,m, sum = 0;
	cin>>n>>m;
    int a[n+1]; a[0] = 0;
	for(i=1;i<=n;i++){
		cin>>a[i];a[i]+=a[i-1];
	}
	 sum=a[n]*m;
	sort(a+1,a+n);
	for(i=1;i<m;i++) sum-=a[i];
	cout<<sum;
	return 0;
}