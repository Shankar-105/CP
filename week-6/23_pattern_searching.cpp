#include <bits/stdc++.h>
using namespace std;
int main(){string text,pat;cin>>text>>pat;vector<int>pi(pat.size());for(int i=1;i<(int)pat.size();i++){int j=pi[i-1];while(j&&pat[i]!=pat[j])j=pi[j-1];if(pat[i]==pat[j])j++;pi[i]=j;}for(int i=0,j=0;i<(int)text.size();i++){while(j&&text[i]!=pat[j])j=pi[j-1];if(text[i]==pat[j])j++;if(j==(int)pat.size()){cout<<i-j+1<<' ';j=pi[j-1];}}cout<<'\n';}