#include <bits/stdc++.h>
using namespace std;
int main(){int n,m;cin>>n>>m;vector<vector<int>>a(n,vector<int>(m)),dp(n,vector<int>(m));for(auto&r:a)for(int&x:r)cin>>x;dp[0][0]=a[0][0];for(int j=1;j<m;j++)dp[0][j]=dp[0][j-1]+a[0][j];for(int i=1;i<n;i++)dp[i][0]=dp[i-1][0]+a[i][0];for(int i=1;i<n;i++)for(int j=1;j<m;j++)dp[i][j]=a[i][j]+min(dp[i-1][j],dp[i][j-1]);cout<<dp[n-1][m-1]<<'\n';}