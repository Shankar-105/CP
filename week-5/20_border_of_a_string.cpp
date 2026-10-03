#include <bits/stdc++.h>
using namespace std;
int main(){string s;cin>>s;int n=s.size();vector<int>pi(n);for(int i=1;i<n;i++){int j=pi[i-1];while(j&&s[i]!=s[j])j=pi[j-1];if(s[i]==s[j])j++;pi[i]=j;}int k=pi[n-1];if(k)cout<<s.substr(0,k)<<'\n';else cout<<"No border\n";}