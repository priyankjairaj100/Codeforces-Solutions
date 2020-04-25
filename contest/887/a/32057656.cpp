//Author:      Divesh Uttamchandani
//Institution: BITS Pilani

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef long long int lli;
#define loop(i,t) for(i=0;i<t;++i)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    FAST_IO
    lli i,j,t,n;
    string s;
    cin>>s;
    n=s.length();
    //first one ke baad atleast 5 zeros
    for(i=0;i<n;i++)
    {
      if(s[i]=='1')
        break;
    }
    lli count=0;
    for(j=i;j<n;j++)
    {
      if(s[j]=='0')
      {
        count++;
      }
    }
    if(count>=6)
      cout<<"yes";
    else
      cout<<"no";

	return 0;
}

//<> with <3 using termicoder:
//https://temricoder.github.io
