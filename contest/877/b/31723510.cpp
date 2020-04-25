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
	if(strlen(str)==1){
		cout<<"1"<<endl;
		return(0);
	}
	(str[0]=='a')?prefa[1]=1:prefb[1]=1;
	for (int i = 1; i <strlen(str); ++i)
	{
		if(str[i]=='a'){
			prefa[i+1]=prefa[i]+1;
			prefb[i+1]=prefb[i];
		}
		else{
			prefb[i+1]=prefb[i]+1;
			prefa[i+1]=prefa[i];
		}
	}
	int temp,max=0;
	for (int i = 1; i <=strlen(str); ++i)
	{
		//cout<<prefa[i]<<"	"<<prefb[i]<<endl;
		for(int j=i;j<=strlen(str);j++)
		{
			temp=(prefa[strlen(str)]-prefa[j-1])+(prefb[j]-prefb[i-1])+prefa[i-1];
			if(temp>=max)
				max=temp;
		}
	}
	cout<<max<<endl;
	return(0);
}