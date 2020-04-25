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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    char a[105][105];
    for (int i = 0; i < 105; ++i)
    	for (int j = 0; j < 105; ++j)
    	{
    		if(modl((i+j),2))
    			a[i][j]='B';
    		else
    			a[i][j]='W';
    	}
    ll n,m; cin>>n>>m; char temp;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>temp;
    		if(temp=='.')
    			cout<<a[i][j];
    		else
    			cout<<"-";
    	}
    	cout<<el;
	}
	return(0);
}