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
map<int,int>vis;
int main(){
//freopen("moobuzz.in", "r", stdin);
//freopen("moobuzz.out", "w", stdout);
int t;
cin >> t;
while(t--){
  int n;
  cin >> n;
  vector<long long int>v1,v2;
  int yax,mine,zero;
  for(int i=0; i<2*n; i++){
  cin >> zero;
  if(zero==0){cin >> yax;v1.push_back(abs(yax));}
  else {v2.push_back(abs(zero));cin >> zero;}
   }
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
   long double ans=0;
 for(int i=0; i<n; i++){
    ans+=sqrt((v1[i]*v1[i]+v2[i]*v2[i]));
  }
  cout << fixed << setprecision(10) << ans<<endl;
 }
}
// I hate when I forget long long
