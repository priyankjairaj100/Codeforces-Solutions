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

ll gcd(ll a, ll b)
{

    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll l,p; cin>>l>>p;
    char s[l]; cin>>s;
    ll f = 0;

    fr(i,l-p){
        if(s[i]=='.' && s[i+p]!='.')
            s[i] = (s[i+p]=='1')?'0':'1';
        if(s[i]!='.' && s[i+p]=='.'){
            s[i+p] = (s[i]=='0')?'1':'0';
        }
        if(s[i]=='.' && s[i+p]=='.'){
            s[i]='1';
            s[i+p]='0';
        }
    }
    fr(i,l)
        if(s[i]=='.') s[i]='1';

    fr(i,l-p){
        if(s[i]!=s[i+p])
            f=1;
    }
    if(!f)cout<<"No";
    else fr(i,l) cout<<s[i];
    cout<<el;
    return(0);
}