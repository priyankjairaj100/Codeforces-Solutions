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
#define for(i,n) for(ll i=0;i<n;++i)
bool myfn(int i, int j) { return i < j; }


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll ln; cin>>ln;
    char str[ln]; cin>>str; ll c=0;
    for(i,ln-1){if(str[i]!=str[i+1]){c++;i++;}}
    cout<<ln-c<<el;

	return(0);
}