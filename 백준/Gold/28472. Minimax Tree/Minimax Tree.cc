#include<bits/stdc++.h>
#define N 100001
using namespace std;
 
vector <int> Gr[N], dp(N, -1);
int n, r;
 
void Input()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> r;
 
    for (int i{}; ++i < n;)
    {
        int u, v; cin >> u >> v;
        Gr[u].push_back(v);
        Gr[v].push_back(u);
    }
 
    int l; cin >> l;
    for(int k, t; l--; dp[k] = t)
        cin >> k >> t;
}
void Init(int now, int prev, int dep)
{
    if (!~dp[now])
    {
        dp[now] = dep & 1 ? -1e9 : 1e9;
        for (int& next : Gr[now])
            if (next ^ prev)
            {
                Init(next, now, dep + 1);
                dp[now] = dep & 1 ? max(dp[now], dp[next]) : min(dp[now], dp[next]);
            }
    }
}
void Query()
{
    int q; cin >> q;
    for (int x; q--; cout << dp[x] << '\n')
        cin >> x;
}
int main()
{
    Input();
    Init(r, r, 1);
    Query();
}
