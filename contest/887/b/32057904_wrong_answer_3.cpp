/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
int x[10]={0};

int main()
{
	int n; cin>>n; int b[n][6]={0};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			cin>>b[i][j];	
			x[b[i][j]]++;
		}
	}
	
	for(int i=1;i<=9;i++)
		if( !x[i] || !x[0]){
			cout<<i-1<<endl;
			return(0);
		}

	for(int i=1;i<=9;i++)
		if(x[i]<2){
			cout<<i*10+i-1<<endl;
			return(0);
		}

	cout<<"sex"<<endl;
}