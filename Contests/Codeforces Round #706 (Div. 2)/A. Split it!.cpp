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
  int n,k;
  cin >> n >> k;
  string a; cin >> a;
  bool bad=0;
  if(n==k*2) {cout << "NO"<<endl;continue;}
  for(int i=0; i<k; i++){
    if(a[i]!=a[n-1-i]) {bad=1;break;}
  }
  if(bad==1)cout << "NO"<<endl;
  else cout << "YES"<<endl;
 } 
}
