#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;cin>>n>>a>>b>>c;
	int ans[3]={n/a,a/b,n/c};
	sort(ans,ans+3);
	cout<<ans[0]+1<<endl;
	return(0);
}
