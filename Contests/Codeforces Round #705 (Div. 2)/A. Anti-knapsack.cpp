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
int main(){
//freopen("moobuzz.in", "r", stdin);
//freopen("moobuzz.out", "w", stdout);
int t;
cin >> t;
while(t--){
  int vis[10000]={0};
  int n,k;
  cin >> n >> k;
  vector<int> v1;
  for(int i=1; i<=n; i++){
    if(i<k&&vis[k-i]==0)v1.push_back(k-i); vis[i]=-1; 
    if(i>k)v1.push_back(i);
   }
  cout << v1.size()<<endl;
  for(int i=0; i<v1.size(); i++){
    cout << v1[i]<<" ";
  }
  cout << endl;
 }
}
// You could've just get the numbers between n/2 to n (except k)
