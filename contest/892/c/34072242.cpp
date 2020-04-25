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
    int n;
	cin>>n;
	vector<int> v(n);
	int ones=0;
	for(int i=0;i<n;i++) {
		cin>>v[i];
		if(v[i]==1) ones++;
	}
	int ans=-1;
	int val=0;
	if(ones>0) ans = n-ones;
	if(ans==-1)
	while(val<(n-1)) {
		for(int i=1;i<(n-val);i++) {
			v[i-1]= __gcd(v[i-1], v[i]);
			if(v[i-1]==1){
				ans=n+val; break; 
			}
		}
		if(ans!=-1) break;
		val++;
	}
	cout<<ans<<endl;
	return(0);
}