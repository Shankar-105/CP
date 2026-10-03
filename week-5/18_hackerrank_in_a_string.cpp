#include <bits/stdc++.h>
using namespace std;
int main(){string s;getline(cin>>ws,s);string t="hackerrank";int j=0;for(char c:s)if(j<(int)t.size()&&c==t[j])j++;cout<<(j==(int)t.size()?"YES":"NO")<<'\n';}