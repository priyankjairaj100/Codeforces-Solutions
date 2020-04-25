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
bool myfn(int i, int j) { return i < j; }
ll n,m; char a[55][55]; ll r[55],c[55];ll f=0;

ll check(ll r[], ll c[], ll n){
    fr(i,n){if(r[i]==0)return(0);}
    fr(i,m){if(c[i]==0)return(0);}
    return(1);
}
void row(ll rn);
void col(ll cn){
    if(c[cn]==1)f=1;
    c[cn]=1;
    ll k=0; ll rn[55]; 
    fr(i,m){if(a[i][cn]=='#'){rn[k]=i;k++;a[i][cn]='.';}}
    fr(i,k){
        row(rn[i]);
    }
}

void row(ll rn){
    if(r[rn]==1)f=1;
    r[rn]=1;
    ll k=0; ll cn[55]; 
    fr(i,n){if(a[rn][i]=='#'){cn[k]=i;k++;a[rn][i]='.';}}
    fr(i,k){
         col(cn[i]);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
     cin>>n>>m; 
    fr(i,n)fr(j,m)cin>>a[i][j];
     fr(i,n)r[i]=0;
     fr(i,m)c[i]=0;ll t =0;
    fr(i,n)fr(j,m){
        if(a[i][j]=='#'){
            row(i);
        }
    }
    if(f)cout<<"Yes"<<el;
    else cout<<"No"<<el;
	return(0);
}