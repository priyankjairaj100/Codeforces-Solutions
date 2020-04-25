/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}
#define fr(i,n) for(ll i=0;i<n;++i)
#define fr1(i,n) for(ll i=1;i<=n;++i)
bool myfn(int i, int j) { return i < j; }

ll n,m, a[100009], nxt[100009], jumps[100009], SQ = 300;
void ct(ll i){
	ll s = (i/(SQ)) * SQ; ll e = min( s+SQ , n );
	if( i + a[i] > e ){
		jumps[i] =  (i + a[i] <= n);
		nxt[i] = jumps[i]? a[i]+i : i;
	}
	else{
		nxt[i] = nxt[i+a[i]];
		jumps[i] = jumps[i+a[i]] + 1;
	}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>n>>m;
	//SQ = sqrt(n);
	fr1(i,n) cin >> a[i];
	for( ll i = n; i ; --i) ct(i);
	while(m--){
		ll type; cin>>type;
		if(!type){
			ll x, y; cin>>x>>y; a[x] = y;
			ll s = (x / (SQ)) * SQ, e = min(s + SQ, n);
			for (ll i = e-1 ; i >= s ; i --) 
				ct(i);
		}
		else{
			ll x, nj=1, lix = 0; cin>>x;
			while(x + a[x] <= n){
				nj += jumps[x];
				x = nxt[x];
			}
			cout<<x<<" "<<nj<<endl;
		}
	}
    return(0);
}