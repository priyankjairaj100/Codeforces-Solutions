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


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n; cin>>n; ll a[n],b[n-1];
    fr(i,n)cin>>a[i];
    fr(i,n-1)b[i]=abs(a[i]-a[i+1]);
    ll m = *max_element(b,b+n-1);
    ll z = *min_element(b,b+n-1);
    ll q = *max_element(a,a+n);
    if(m==0 || z ==0)
        cout<<"NO"<<el;
    else{
        ll x = (q%m==0)?q/m:(q/m)+1, y = m;
        ll fx = (a[0]-1) / y + 1;
        ll fy = a[0] - (fx - 1) * y;
        for(ll i =0;i<n-1;++i){
            ll fx1 = (a[i+1] - 1) / y + 1;
            ll fy1 = a[i+1] - (fx1 - 1) * y;
            //cout<<fx1<<" "<<fy1<<el;
            ll xw = abs(fx1-fx);
            ll yw = abs(fy1-fy);
            if((xw>1 || yw>1)||(xw+yw==0)||(xw+yw==2)){
                cout<<"NO"<<el;
                return(0);}
            fx=fx1; fy=fy1;
    }
    cout<<"YES"<<el;
    cout<<x<<" "<<y<<el;
    }
	return(0);
}