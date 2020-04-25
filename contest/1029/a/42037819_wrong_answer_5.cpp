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
    string t; string s;
    cin>>t;
    ll c = 0;
    for(ll i = 0; i < t.length()/2; i++){
        if( t[i] != t[ t.length()-i-1 ] ) break;
        else c++;
    }
    cout<<t; k--;
    while(k--){
        cout<<t.substr(c, t.length());
    }
    return(0);
}