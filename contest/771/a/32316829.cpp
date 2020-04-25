/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
vector<int> graph[150005];
vector<int> go[150005];
vector<int> vis;
ll ct = 0;

ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}
void dfs(int cur)
{
	if(vis[cur] == 1)
	return;
	vis[cur] = 1;
	ct++;
	for(int i=0;i<go[cur].size();i++)
	dfs(go[cur][i]);
}

int main()
{
	long long int  n, m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a, b;
		cin>>a>>b;
		go[a].push_back(b);
		go[b].push_back(a);
	}
	for(int i=0;i<=n;i++)
	vis.push_back(0);
	long long int tot = 0;
	for(int i=1;i<=n;i++)
	{
		ct = 0;
		dfs(i);
		tot += (((ct - 1) * ct) / 2);
	}
	if(tot == m)
	cout<<"YES"<<el;
	else
	cout<<"NO"<<el;
}