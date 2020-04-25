#include <bits/stdc++.h>
using namespace std;

main(){
	int q;cin>>q;
	while(q--){
	    
		long n;cin>>n;
		if(n%4==0)
			cout<<n/4;
		else if(n%4==1)
			cout<<(n>=9?(n/4-1):-1);
		else if(n%4==2)
			cout<<(n>=6?(n/4):-1);
		else
			cout<<(n>=15?(n/4-1):-1);
        cout<<"\n";
	}
}