#include <bits/stdc++.h>
using namespace std;
int pos[600000];

bool cmp(int a, int b){
  return pos[a] < pos[b];
}
int main(){
    int n; cin>>n;
    vector <int> g[n+1];
    for(int i = 1; i<=n-1; ++i){
        int u,v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int b[n+1]; vector<int> c;
    for(int i=0;i<n;i++) {cin>>b[i]; pos[b[i]] = i;} 
    for(int i = 1; i<=n; i++) sort(g[i].begin(),g[i].end(),cmp);
    queue <int> q;
    int vis[n+1]; for(int i = 0; i<=n; ++i) vis[i]= 0;
    q.push(1); vis[1] = 1; c.push_back(1);
    while(!q.empty()){
        int e = q.front();
        q.pop();
        vis[e]=1;
        for(auto i:g[e]) if(!vis[i]){q.push(i); c.push_back(i);} 
    }
    for(int i = 0; i < n; i++) if(c[i]!=b[i]) {cout<<"No";return 0;}
    cout<<"Yes";
    return 0;
}