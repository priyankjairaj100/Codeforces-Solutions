#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<math.h>
#include<map>
#include <unordered_map> 
#include<vector>
#include<queue>
#include<set>
#include <bits/stdc++.h>
#include<deque> 
#include<string>
#define N 33
#define K 200005
#define MOD 1e9+7
#define ll long long int
using namespace std;
 
ll max(ll a, ll b){
    if(a>b)
        return a;
    return b;
}
ll min(ll a, ll b){
    if(a<b)
        return a;
    return b;
}
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k,d;
        cin>>n>>k>>d;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mark[k+5] = {0};
        ll ans = INT_MAX - 5;
        ll init = 0;
        for(int i=0;i<d;i++){
            mark[a[i]]++;
            if(mark[a[i]] == 1){
                init++;
            }
        }
        ans = init;
        //cout<<t<<" "<<init<<endl;
        ll fin_ans = init;
        for(int i=d;i<n;i++){
            ll tmp;
            //mark[a[i]]++;
            if(mark[a[i-d]] == 1 && mark[a[i]] == 0){
                tmp = ans;
            }
            else if(mark[a[i-d]] == 1 && mark[a[i]] > 0){
                if(a[i-d] == a[i]){
                    tmp = ans;
                }
                else{
                    tmp = ans - 1;
                }
            }
            else if(mark[a[i-d]] > 1  && mark[a[i]] == 0){
                tmp = ans+1;
            }
            else{
                tmp = ans;
            }
            mark[a[i-d]]--;
            mark[a[i]]++;
            fin_ans = min(fin_ans, tmp);
            ans = tmp;
            //cout<<i<<" "<<ans<<endl;
        }
        cout<<fin_ans<<endl;
    }
 
}