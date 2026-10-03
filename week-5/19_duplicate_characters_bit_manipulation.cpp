#include <bits/stdc++.h>
using namespace std;
int main(){string s;getline(cin>>ws,s);unsigned long long seen=0;for(char c:s){if(c<'a'||c>'z')continue;unsigned long long bit=1ULL<<(c-'a');if(seen&bit)cout<<c<<' ';else seen|=bit;}cout<<'\n';}