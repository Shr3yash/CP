#include <bits/stdc++.h>
using namespace std;

bool s(vector<int>& v, int strtv, int asize, int arr[], int sum, int& res){
  if(strtv==asize)
  {
    if(sum==res)
    {
      for(auto iter:v){
        cout<<iter<<" ";
        cout<<endl;
        return true;
        }
    }
    return false;
  }
  //pick
  v.push_back(arr[strtv]);
  res+=arr[strtv];
  if(s(v, strtv+1, asize, arr, sum, res)) return true;
  v.pop_back();
  res-=arr[strtv];
  //!pick
  if(s(v, strtv+1, asize, arr, sum, res)) return true;
  return false;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
  int arr[]={1,3,5,2,1};
  int sum=5;
  int res=0;
  int asize =  sizeof(arr)/sizeof(arr[0]);
  vector<int> v;
  s(v, 0, asize, arr, sum, res);
}
