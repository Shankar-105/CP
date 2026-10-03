#include <bits/stdc++.h>
using namespace std;
int main(){int n,t;cin>>n>>t;vector<int>a(n);for(int&x:a)cin>>x;sort(a.begin(),a.end());bool ok=false;for(int i=0;i<n-2;i++){int l=i+1,r=n-1;while(l<r){long long s=1LL*a[i]+a[l]+a[r];if(s==t){cout<<a[i]<<' '<<a[l]<<' '<<a[r]<<'\n';ok=true;l++;r--;}else if(s<t)l++;else r--;}}if(!ok)cout<<"No triplet found\n";}