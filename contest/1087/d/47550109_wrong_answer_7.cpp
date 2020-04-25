// Coded with <3 by la_flame_

#include <bits/stdc++.h>
using namespace std;
 
#define LL long long
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define rep(i,a,b,d) for(int i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(int i = a; i>=b; i-=d)
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define all(c) (c).begin(),(c).end()

int deg[100005];
int main(){
	LD s; LL n;
	cin>>n>>s;
	rep(i,1,n-1,1){ int u,v; cin>>u>>v; deg[u]++; deg[v]++; }
	LD cnt = 0.0;
	rep(i,1,n,1) if(deg[i]==1) cnt++;
	cout<<s/cnt * 2.0<<endl;
	return 0;
}