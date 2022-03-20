#include <bits/stdc++.h>
using namespace std;

void recur(int s, vector<int> &v, int arr[], int x){
	if(s==x){
		for(auto it: v){
			cout<<it<<" ";
		}
		cout<<endl;
		return;
	}
	v.push_back(arr[s]);
	recur(s+1, v, arr, x);
	v.pop_back();
	recur(s+1, v, arr, x);

	
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int arr[]={4,55,89,1,3};
    vector<int> v;
	recur(0, v, arr, 5);
}
