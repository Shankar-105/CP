#include <bits/stdc++.h>
using namespace std;
int main(){string s;cin>>s;int words=s.empty()?0:1;for(char c:s)if(isupper((unsigned char)c))words++;cout<<words<<'\n';}