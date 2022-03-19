#include <bits/stdc++.h>
using namespace std;

int recur(int y){
	if(y==0)
		return 0;
	if(y==1)
		return 1;
	int last = recur(y-1);
	int slast = recur(y-2);

	return last+slast;
}
int main()
{

		#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	    #endif


		cout<<recur(0);
	
}
