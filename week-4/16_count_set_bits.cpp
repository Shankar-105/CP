#include <bits/stdc++.h>
using namespace std;
int main(){unsigned int n;cin>>n;int c=0;while(n){n&=n-1;c++;}cout<<c<<'\n';}