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
int t;
cin >> t;
while(t--){
  int n;
  cin >> n;
  long long int x[n],y[n];
  for(int i=0; i<n; i++) {cin >> x[i] >> y[i];}
  if(n%2==1) {cout << 1 << endl;}
  else{
   long long  int m1,m2;
    sort(x,x+n),sort(y,y+n);
    m1 = x[n/2]-x[n/2-1]+1; 
    m2 = y[n/2]-y[n/2-1]+1;
   cout << m1*m2 << endl;
   }
 }
}
