int s(vector<int>& v, int strtv, int asize, int arr[], int sum, int& res){
  if(strtv==asize)
  {
    if(sum==res)
    {
      for(auto iter:v)
        cout<<iter<<" ";
    }
    cout<<endl;
    return;
  }
  //pick
  v.push_back(arr[strtv]);
  res+=arr[strtv];
  s(v, strtv+1, asize, arr, sum, res);
  v.pop(arr[strtv]);
  res-=arr[strtv];
  //!pick
  s(v, strtv+1, asize, arr, sum, res);
}

int main(){
  int arr[]={1,3,5,2,1};
  int sum=5;
  int res=0;
  int asize =  sizeof(arr[])/sizeof(arr[0]);
  vector<int> v;
  s(v, 0, asize, arr, sum, res);
}
