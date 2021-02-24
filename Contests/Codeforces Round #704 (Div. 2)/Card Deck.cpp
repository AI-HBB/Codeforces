#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm> 
#include <bits/stdc++.h>
#include <numeric>
#include <math.h> 
#include <vector> 
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
int main() {
//freopen("swap.in", "r", stdin);
//freopen("swap.out", "w", stdout);
int t; cin >> t;
while(t--){
  int n; cin >> n;
  vector<int>v1; vector<int>v2;
  int num[n],vis[n+1],ans=n;
  for(int i=0; i<n; i++){
   cin >> num[i]; vis[i]=0;
  }
  for(int i=n-1; i>=0; i--){
  if(ans!=num[i]){v1.push_back(num[i]); vis[num[i]]=1;}
  else{
    v1.push_back(num[i]); vis[num[i]]=1; 
    v2.insert(v2.end(), v1.rbegin(), v1.rend());
    v1.clear();
    while(vis[ans]==1&&i>=0){ans--;}
    }
   }
  for(int i=0; i<n; i++){
    cout << v2[i] << " ";}
  cout << "\n";
 } 
}
