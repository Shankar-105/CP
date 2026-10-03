#include <bits/stdc++.h>
using namespace std;
int main(){int n,amount;cin>>n>>amount;vector<int>c(n);for(int&x:c)cin>>x;vector<long long>dp(amount+1);dp[0]=1;for(int coin:c)for(int x=coin;x<=amount;x++)dp[x]+=dp[x-coin];cout<<dp[amount]<<'\n';}