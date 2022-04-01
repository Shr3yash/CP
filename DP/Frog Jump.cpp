//taking n everywhere instead of n+1 coz we need to go from 0 to n-1
//memoization

int solve(int ndx, vector<int>& height, vector<int>& dp){
  if(ndx==0)return 0;
  if(dp[ndx]!=-1)return dp[ndx];
  int jump1=solve(ndx-1, height, dp)+abs(height[ind]-height[ind-1]);
  if(ndx>1){
    int jump2=solve(ndx-2, height, dp) + abs(height[ind]-height[ind-2]);
  }
  return dp[ndx]=min(jump1,jump2);
}
int  main(){
  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int> dp(n,-1);
  cout<<solve(n-1,height,dp);
}

//tabulation 

int  main(){
  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int> dp(n,-1);
  dp[0]=0;
  for(int i=1; i<n; i++){
    jump1=dp[i-1]+abs(height[ind]-height[ind-1]);
    if(i>1){ 
      jump2=dp[i-2]+abs(height[ind]-height[ind-2]);
  }
    dp[i]=min(jumpOne, jumpTwo);
  }
  cout<<dp[n-1];
}

//tabpro

int  main(){
  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  int prev=0;
  int prev2=0;
  for(int i=1;i<n;i++){
      
      int jumpTwo = INT_MAX;
      int jumpOne= prev + abs(height[i]-height[i-1]);
      if(i>1)
        jumpTwo = prev2 + abs(height[i]-height[i-2]);
    
      int cur_i=min(jumpOne, jumpTwo);
      prev2=prev;
      prev=cur_i;
        
  }
  cout<<prev;
}
