#include <bits/stdc++.h>
using namespace std;
int main(){int n;cin>>n;vector<int> c(100);for(int i=0,x;i<n;i++){cin>>x;if(x>=0&&x<100)c[x]++;}for(int v=0;v<100;v++)while(c[v]--)cout<<v<<' ';cout<<'\n';}