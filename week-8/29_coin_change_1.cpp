#include <bits/stdc++.h>
using namespace std;
int main(){int n,amount;cin>>n>>amount;vector<int>c(n);for(int&x:c)cin>>x;const int INF=1e9;vector<int>dp(amount+1,INF);dp[0]=0;for(int x=1;x<=amount;x++)for(int coin:c)if(coin<=x&&dp[x-coin]!=INF)dp[x]=min(dp[x],dp[x-coin]+1);cout<<(dp[amount]==INF?-1:dp[amount])<<'\n';}