#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm> 
#include <math.h> 
#include <vector> 
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
int main() {
//freopen("swap.in", "r", stdin);
//freopen("swap.out", "w", stdout);
int n,m,re,k;
int mod=1e9+7;
cin >> n >> m;
vector<pair<int,string> >v[100005];
string s;
for (int i=0;i<n;i++){
 cin>>s>>re>>k;
  v[re].push_back({-k,s});}
	for (int i=1;i<=m;i++){
		sort(v[i].begin(),v[i].end());
		if (v[i].size()>2 && v[i][1].first==v[i][2].first)
			cout<<"?"<<endl;
		else
			cout<<v[i][0].second<<" "<<v[i][1].second<<endl;
	 }
 }
 
 // a good problem for vectors and pairs
 //link: https://codeforces.com/contest/659/problem/B
