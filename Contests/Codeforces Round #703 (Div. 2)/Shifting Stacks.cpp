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
  long long int arr[10000005],sum=0;
  bool flag=1;
  cin >> n;
	for(int i = 0; i <n; i++) {
    cin >> arr[i];
    sum+=arr[i];
    if(i*(i+1)/2>sum) flag=0;
    }
 cout << (flag ? "YES\n" : "NO\n");
 }
}
