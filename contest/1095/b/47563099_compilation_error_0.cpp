// Coded with <3 by la_flame_

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n; 	int a[n]; for(int i = 0; i<n; i++) cin>>a[i];
	sort(a,a+n);
	if(a[n-1]-a[1] > a[n-2]-a[0]) cout<<a[n-1] - a[1]<<endl; else cout<<a[n-2]-a[0]<<endl;
	return 0;
}// Coded with <3 by la_flame_

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n; 	int a[n]; for(int i = 0; i<n; i++) cin>>a[i];
	sort(a,a+n);
	if(a[n-1]-a[1] > a[n-2]-a[0]) cout<<a[n-1] - a[1]<<endl; else cout<<a[n-2]-a[0]<<endl;
	return 0;
}