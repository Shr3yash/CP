
#include <bits/stdc++.h>

using namespace std;


//2^n -> O(n)
//SC O(n) still the same
//memoization

int f(int n, vector<int>& dp){
    if(n<=1) return n;
    
    if(dp[n]!= -1) return dp[n];
    return dp[n]= f(n-1,dp) + f(n-2,dp);
}


int main() {
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
  int n=2;
  vector<int> dp(n+1,-1);
  cout<<f(n,dp);
  return 0;
}



