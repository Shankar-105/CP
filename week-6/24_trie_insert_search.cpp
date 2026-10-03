#include <bits/stdc++.h>
using namespace std;
struct Node{array<int,26> next{};bool end=false;Node(){next.fill(-1);}};
vector<Node>trie(1);
void insertWord(const string&s){int p=0;for(char c:s){int x=c-'a';if(trie[p].next[x]==-1){trie[p].next[x]=trie.size();trie.emplace_back();}p=trie[p].next[x];}trie[p].end=true;}
bool searchWord(const string&s){int p=0;for(char c:s){int x=c-'a';if(x<0||x>=26||trie[p].next[x]==-1)return false;p=trie[p].next[x];}return trie[p].end;}
int main(){int n;cin>>n;while(n--){string s;cin>>s;insertWord(s);}string q;cin>>q;cout<<(searchWord(q)?"Found":"Not Found")<<'\n';}