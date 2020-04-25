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
    char str[105]; cin>>str;
    int lco=-1,lzi=-1,zc=0,oc=0;
    for (int i = 0; i < strlen(str); ++i)
    {
    	if(str[i]=='0'){
    		lzi=i;
    		zc++;
    	}
    	else{
    		lco=i;
    		oc++;
    	}
    }
    if( zc>=6 && oc>=1 && lco>lzi && lzi && lco)
    	cout<<"yes"<<el;
    else
    	cout<<"no"<<el;    
	return(0);
}