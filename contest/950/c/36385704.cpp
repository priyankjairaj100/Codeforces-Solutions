/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define pb push_back
#define mk make_pair
#define el "\n"
//#define for (i, n) for (ll i = 0; i < n; ++i)
//#define dec(i, n) for (ll i = n; i > 0; --i)

ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}

const int inf = 1e6;
vector<int> q[inf];
int main()
{
    string s;
    cin >> s;
    int Max = 0, k = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            q[k++].pb(i + 1);
        else
        {
            if (k == 0)
                return cout << "-1" << endl, 0;
            q[--k].pb(i + 1);
        }
        Max = max(Max, k);
    }
    if (k != Max)
        printf("-1\n");
    else
    {
        printf("%d\n", Max);
        for (int i = 0; i < Max; i++)
        {
            cout << q[i].size();
            for (int j = 0; j < q[i].size(); j++)
                cout << " " << q[i][j];
            cout << endl;
        }
    }
    return 0;
}
