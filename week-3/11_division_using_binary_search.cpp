#include <bits/stdc++.h>
using namespace std;
long long divPos(long long a,long long b){long long l=0,r=a,ans=0;while(l<=r){long long m=l+(r-l)/2;if(m<=a/b)ans=m,l=m+1;else r=m-1;}return ans;}
int main(){long long a,b;cin>>a>>b;if(!b){cout<<"Division by zero is not allowed\n";return 0;}bool neg=(a<0)^(b<0);long long q=divPos(llabs(a),llabs(b));cout<<(neg?-q:q)<<'\n';}