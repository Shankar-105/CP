#include <bits/stdc++.h>
using namespace std;
int addNumbers(int a,int b){while(b){unsigned carry=(unsigned)(a&b)<<1;a^=b;b=(int)carry;}return a;}
int main(){int a,b;cin>>a>>b;cout<<addNumbers(a,b)<<'\n';}