#include <bits/stdc++.h>
using namespace std;
int n,bestDiff=INT_MAX;vector<int>a,chosen,best;long long total;
void solve(int idx,int taken,long long sum){if(taken==n/2){int diff=abs((int)(total-2*sum));if(diff<bestDiff){bestDiff=diff;best=chosen;}return;}if(idx==n)return;for(int i=idx;i<n;i++){chosen.push_back(i);solve(i+1,taken+1,sum+a[i]);chosen.pop_back();}}
int main(){cin>>n;a.resize(n);for(int&x:a){cin>>x;total+=x;}solve(0,0,0);vector<bool>used(n);for(int i:best)used[i]=true;cout<<"First set: ";for(int i:best)cout<<a[i]<<' ';cout<<"\nSecond set: ";for(int i=0;i<n;i++)if(!used[i])cout<<a[i]<<' ';cout<<"\nDifference: "<<bestDiff<<'\n';}