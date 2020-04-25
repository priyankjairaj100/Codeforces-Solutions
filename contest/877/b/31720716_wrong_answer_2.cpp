/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long

int main()
{
	char str[5005];
	cin>>str;
	int prefa[5005]={0},prefb[5005]={0};
	(str[0]=='a')?prefa[0]++:prefb[0]++;
	for (int i = 1; i < strlen(str); ++i)
	{
		if(str[i]=='a')
			prefa[i]=prefa[i-1]+1;
		else
			prefb[i]=prefb[i-1]+1;
	}
	int temp,max=0;
	for (int i = 0; i < strlen(str); ++i)
	{
		for(int j=i;j<strlen(str);j++)
		{
			temp=(prefa[strlen(str)-1]-prefa[j])+(prefb[j]-prefb[i])+prefa[i];
			if(temp>=max)
				max=temp;
		}
	}
	cout<<max<<endl;
	return(0);
}