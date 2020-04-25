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

int n,m, a[100009], nxt[100009], jumps[100009], SQ = 300;
void ct(int i){
	int s = (i/(SQ)) * SQ; int e = min( s+SQ , n );
	if( i + a[i] >= e ){
		jumps[i] =  (i + a[i] < n);
		nxt[i] = jumps[i]? a[i]+i : i;
	}
	else{
		nxt[i] = nxt[i+a[i]];
		jumps[i] = jumps[i+a[i]] + 1;
	}
}

int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(NULL);
    cin>>n>>m;
	fr(i,n) scanf("%d",&a[i]);
	for( int i = n-1; i>=0 ; --i) ct(i);
	while(m--){
		int type; scanf("%d",&type);
		if(!type){
			int x, y; scanf("%d%d",&x,&y); --x; a[x] = y;
			int s = (x / (SQ)) * SQ, e = min(s + SQ, n);
			for (int i = e-1 ; i >= s ; i --) 
				ct(i);
		}
		else{
			int x, nj=1; scanf("%d",&x); --x;
			while(x != nxt[x]){
				nj += jumps[x];
				x = nxt[x];
			}
			printf("%d %d\n",x+1,nj);
		}
	}
    return(0);
}