#include <bits/stdc++.h>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int x,y; cin>>x>>y;
	int a[x],b[y];
	for (int i = 0; i < x; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < y; ++i)
	{
		cin>>b[i];
	}
	qsort(a,x,sizeof(int),compare);
	qsort(b,y,sizeof(int),compare);
	if(a[0]!=b[0])
	cout<<min((a[0]*10+b[0]),(b[0]*10+a[0]))<<endl;
	else
	cout<<a[0]<<endl;
	return(0);
}