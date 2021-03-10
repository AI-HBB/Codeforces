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
 int n,k,arr[1000005],mex=0;
 cin >> n >> k;
  for(int i=0; i<n; i++){
    cin >> arr[i];
    vis[arr[i]]=1;
  }
  if(k==0){cout << n << endl; continue;}
  sort(arr,arr+n);
  for(int i=0; i<n; i++){
    if(arr[i]==mex)mex++;
    else break;
  }
  int ans;
  if(mex>arr[n-1]) cout << n+k << endl;
  else {
     ans=mex+arr[n-1];
    if(ans%2==1)ans++;
     ans=ans/2;
    if(vis[ans]==1) cout <<n<<endl;
    else cout << n+1<<endl;
    }
    for(int i=0; i<n; i++) vis[i]=0;
 }
}
