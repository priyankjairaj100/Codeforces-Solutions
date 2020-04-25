//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b,d) for(int i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(int i = a; i>=b; i-=d)
#define pb push_back
#define pii pair<int, int>

int x[5005], l[5005], r[5005], ql[5005], qr[5005];
int tree[20009], tree2[20009];

void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = (x[start] == 1)? 1 : 0;
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}


void build2(int node, int start, int end)
{
    if(start == end)
    {
        tree2[node] = (x[start] == 2)? 1 : 0;
    }
    else
    {
        int mid = (start + end) / 2;
        build2(2*node, start, mid);
        build2(2*node+1, mid+1, end);
        tree2[node] = tree2[2*node] + tree2[2*node+1];
    }
}

int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        return 0;
    }
    if(l <= start and end <= r)
    {
        return tree[node];
    }
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}

int query2(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        return 0;
    }
    if(l <= start and end <= r)
    {
        return tree2[node];
    }
    int mid = (start + end) / 2;
    int p1 = query2(2*node, start, mid, l, r);
    int p2 = query2(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}

int32_t main(){
    fastio
    int n,q; cin>>n>>q;
    rep(i,1,q,1){int u,v; cin>>u>>v; l[i] = u; r[i] = v; rep(j,u,v,1) x[j]++;}
    int cnt = 0; rep(i,1,n,1) if(x[i]) cnt++;
    build(1,1,n); build2(1,1,n);
    int ans = MOD;
    rep(i,1,q,1){
        rep(j,1,q,1){
            if(i!=j){
                int at = query(1,1,n,l[i],r[i]) + query(1,1,n,l[j],r[j]);
                if(r[i] < l[j] or r[j] < l[i]) {ans = min(ans, at); continue;}
                int l1 = -1, r1 = -1;
                if(l[j] <= r[i] and r[j] >= r[i]){ l1 = l[j]; r1 = r[i]; }
                else{ l1 = l[i]; r1 = r[j]; }
                at += query2(1,1,n,l1,r1);
                ans = min(ans, at);
            }
        }
    }
    cout<<cnt - ans<<endl;
    return 0;  
}
