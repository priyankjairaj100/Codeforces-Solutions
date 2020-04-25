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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, k ; cin>>n>>k;
    string t; string x = "";
    cin>>t;
        fr(j, t.length()/2){
            if( t.substr(0,j+1) == t.substr(t.length()-j-1,t.length())) x = t.substr(j+1, t.length());
        }
    cout<<t; k--;
    if(x == "") while(k--) cout<<t;
    else while(k--) cout<<x;
    return(0);
}