/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/
// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
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
    string str; cin>>str; 
    ll lmax = 0;
    for(i,ln/2){
        if(str.substr(0,i+1) == str.substr(i+1,i+1)){
            lmax=2*(i+1);}
    }
    ll ans = 0;
  
    if(!lmax)
        ans = ln;
    else
        ans = lmax/2 + 1 + (ln - lmax);
    cout<<ans<<el;
	return(0);
}