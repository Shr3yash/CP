#include <bits/stdc++.h>
using namespace std;

int s(vector<int>& v, int strtv, int asize, int arr[], int sum, int& res, int& res2){
  if(strtv==asize)
  {
    if(sum==res)
    {
      // for(auto iter:v)
      //   cout<<iter<<" ";
      //   cout<<endl;
        return 1;
    }
    
    return 0;;
  }
  //pick
  v.push_back(arr[strtv]);
  res+=arr[strtv];
  int p= s(v, strtv+1, asize, arr, sum, res, res2);
  //!pick
  v.pop_back();
  res-=arr[strtv];

  int np = s(v, strtv+1, asize, arr, sum, res, res2);
  res2=p+np;
  return p+np;

}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
  int arr[]={1,3,5,2,1};
  int sum=5;
  int res=0;
  int res2=0;
  int asize =  sizeof(arr)/sizeof(arr[0]);
  vector<int> v;
  s(v, 0, asize, arr, sum, res, res2);
  cout<<res2;
}
