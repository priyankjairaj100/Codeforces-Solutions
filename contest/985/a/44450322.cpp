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
    cin>>n;

    lli A[n/2];
    lli m1=0;
    lli m2=0;
    loop(i,n/2)
    {
        //do something
        cin>>A[i];
    }
    sort(A,A+n/2);
    loop(i,n/2)
    {
        m1+=abs(A[i]-(2*i+1));
        m2+=abs(A[i]-(2*i+2));
    }

    cout<<min(m1,m2)<<endl;
    return 0;
}