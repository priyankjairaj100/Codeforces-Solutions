/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
using namespace std;  
const int maxn = 405;  
  
int n,m;  
int dis[maxn];  
int connect[maxn][maxn];  
  
int bfs(int val)  
{  
    queue<int>q;  
    memset(dis,-1,sizeof(dis));  
    dis[1] = 0;  
    q.push(1); 
    while (!q.empty())  
    {  
        int x=q.front();  
        q.pop();  
  
        for(int i=1;i<=n;i++)  
        {  
            if (connect[x][i]==val&&dis[i]==-1)  
            {  
                dis[i]=dis[x]+1;  
                q.push(i);  
            }  
        }  
    }  
    return dis[n];  
}  
  
int main()  
{  
    cin>>n>>m;  
    int x,y;
    for (int i=0;i<m;i++)  
    {  
        cin>>x>>y;  
        connect[x][y]=connect[y][x]=1;  
    }  
    cout<<bfs(1-connect[1][n])<<endl;  
    return (0);  
}  

