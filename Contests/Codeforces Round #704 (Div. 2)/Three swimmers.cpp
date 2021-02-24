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
int t;
cin >> t;
while(t--){
  long long int a,b,c,d,ans,good=1;
  cin >> a >> b >> c >> d;
 if(a%b==0||a%c==0||a%d==0){
   cout << 0 << endl;good=0;}
   if (good==1){
   ans=min(b-(a%b),min(c-(a%c),d-(a%d)));
    cout << ans << endl;}
 }
}
