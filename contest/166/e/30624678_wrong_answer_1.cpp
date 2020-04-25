#include<bits/stdc++.h>
using namespace std;

#define LL long long

int M = 1000000007;

int main(){
	int n;
	cin>>n;

	if(n==1){cout<<"0"<<endl;}
	else{
		int x=3,a=3;
		for(int i=3;i<=n;i++){
			x = (x*3)%M;
			cout<<i<<" "<<x<<","<<a<<endl;
			a = (x - a + M)%M;
		}
		cout<<a<<endl;
	}
	return 0;
}