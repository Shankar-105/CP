#include <bits/stdc++.h>
using namespace std;
int main(){int n;cin>>n;vector<double>a(n);for(double&x:a)cin>>x;vector<vector<double>>b(n);for(double x:a){int i=min(n-1,max(0,(int)(x*n)));b[i].push_back(x);}for(auto&v:b)sort(v.begin(),v.end());int k=0;for(auto&v:b)for(double x:v)a[k++]=x;for(double x:a)cout<<x<<' ';cout<<'\n';}