#include <bits/stdc++.h>
using namespace std;
long long egcd(long long a,long long b,long long&x,long long&y){if(!b){x=1;y=0;return a;}long long x1,y1;long long g=egcd(b,a%b,x1,y1);x=y1;y=x1-(a/b)*y1;return g;}
int main(){long long a,b,x,y;cin>>a>>b;long long g=egcd(a,b,x,y);cout<<"gcd = "<<g<<'\n';cout<<"x = "<<x<<", y = "<<y<<'\n';cout<<"Check: "<<a*x+b*y<<'\n';}