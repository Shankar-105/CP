#include <bits/stdc++.h>
using namespace std;
int main(){long long n;cin>>n;int steps=0;while(n!=1){if(n%2)n=3*n+1;else n/=2;steps++;}cout<<steps<<'\n';}