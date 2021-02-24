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
 int n,m;
 string a,b;
 cin >> n >> m >> a >> b;
 int test=0,arr[m],ans=0,arr2[m];
 for(int i=0; i<m; i++){
   while(a[test]!=b[i]&&test<n){
     test++;}
    arr[i]=test;
    test++;}
 test=n-1;
 for(int i=m-1; i>=0; i--){
   while(a[test]!=b[i]&&test>0){
     test--;}
    arr2[i]=test;
    test--;}
 for(int i=0; i<m-1; i++){
   ans=max(ans,arr2[i+1]-arr[i]);}
   cout << ans <<endl;
   }
