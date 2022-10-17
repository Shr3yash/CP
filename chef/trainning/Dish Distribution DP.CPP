//the constraints and the time limit of the problem allow a simple O(n3) dp solution to pass. The recurrence is straight-forward. Let dp[x][y] denote the number of ways of preparing y dishes by the first x cooks. Clearly, our answer will be dp[m][n]. The recurrence is as follows:

//dp[i][j]=Σdp[i-1][j-k] where x[i]<=k<=y[i]
#include <iostream>

#define fast                    \
    ios::sync_with_stdio(false);\
    cin.tie(nullptr);

using namespace std;

int t, n, m, x[105], y[105];
long long int memo[102][102];

long long int solve(int sum, int index) {
    if (sum < 0) 
        return 0;
    if (index == m && sum == 0) 
        return 1;
    else if (index > m)
        return 0;
    else if (memo[sum][index] != -1)
        return memo[sum][index];
    else {
        long long int ways = 0;
        
        for (int i = x[index]; i <= y[index]; i++)
            ways = (ways + solve(sum - i, index + 1)) % 1000000007;

        return memo[sum][index] = ways;
    }
}

int main() {
    fast;
    cin >> t;
    
	while (t--) {
	    cin >> n >> m;
	    
	    for (int i = 0; i < 102; i++) {
	        for (int j = 0; j < 102; j++) {
	            memo[i][j] = -1;
	        }
	    }
	    
	    for (int i = 0; i < m; i++)
	        cin >> x[i] >> y[i];

	    cout << solve(n, 0) << '\n';
	}
	return 0;
}
