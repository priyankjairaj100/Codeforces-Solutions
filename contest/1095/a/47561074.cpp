// Coded with <3 by la_flame_

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n; string st; cin>>st; int i = 1, k = 0;
	while(i<=n){
		cout<<st[i-1];
		k++;
		i+=k;
	}
	return 0;
}