
#include <bits/stdc++.h>

using namespace std;


//2^n -> O(n)
//SC 2*O(n) stack recursion's + dp array
//memoization


//O(n)
//O(n) dp array
//tabulation


//O(n)
//O(1)
//tabopt


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

  int n;
  cin>>n;
  vector<int> dp(n+1,-1);

  //int dp[n+1];
  //memset(dp, -1, sizeof dp);
  // cout<<f(n,dp);
  //return 0;

  // dp[0]=0;
  // dp[1]=1;

  // for(int i=2; i<=n; i++ ){
  //   dp[i]=dp[i-1]+dp[i-2];
  // }
  // cout<<dp[n];
  // return dp[n];

  int prev=0, prev2=1;
  for(int i=2; i<=n; i++){
    int cur=prev+prev2;
    prev2=prev;
    prev=cur;
  }
  cout<<prev;

}



