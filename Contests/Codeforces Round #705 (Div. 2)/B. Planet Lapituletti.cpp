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
  int check[10]={0,1,5,-1,-1,2,-1,-1,8,-1};
  int t; 
  cin >> t;
     while(t--){
	int h,m;
	cin >> h >> m;
	char a[6];
	cin >> a;
	int num1,num2;
	num1=(a[0]-'0')*10+a[1]-'0';
	num2=(a[3]-'0')*10+a[4]-'0';
	int mirclk[2];
	 for(int j=0; j<10000; j++){
	  mirclk[1]=(num2+j)%m;
	  mirclk[0]=(num1+(num2+j)/m)%h;
			
	   int n1=mirclk[0]/10, n2=mirclk[0]%10, n3=mirclk[1]/10, n4=mirclk[1]%10;
	    if(check[n1]==-1||check[n2]==-1||check[n3]==-1||check[n4]==-1) continue;
			
	    if(check[n1]+check[n2]*10<m && check[n3]+check[n4]*10<h){
		cout << n1 << n2 << ":" << n3 << n4 << endl;
		break;
	  }
	}
     }
   }
// A very good logic problem. I was not able to do it and got the idea from another person
