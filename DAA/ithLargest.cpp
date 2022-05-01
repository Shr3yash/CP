#include <bits/stdc++.h>
using namespace std;
int Kth_smallest(map<int, int> m, int k)
{
	int freq = 0;
	for (auto it = m.begin(); it != m.end(); it++) {
		freq += (it->second); // adding the frequencies of
							// each element
		if (freq >= k) // if at any point frequency becomes
					// greater than or equal to k then
					// return that element
		{
			return it->first;
		}
	}
	return -1; // returning -1 if k>size of the array which
			// is an impossible scenario
}
int main()
{
	int n = 5;
	int k = 2;
	vector<int> arr = { 12, 3, 5, 7, 19 };
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		m[arr[i]] += 1; // mapping every element with it's
						// frequency
	}
	int ans = Kth_smallest(m, k);
if(k==1){
	cout << "The " << k << "st smallest element is " << ans
		<< endl;
}
else if(k==2){
	cout << "The " << k << "nd smallest element is " << ans
		<< endl;
}
else if(k==3){
	cout << "The " << k << "rd smallest element is " << ans
		<< endl;
}
else{
	cout << "The " << k << "th smallest element is " << ans
		<< endl;
}
	return 0;
}

