class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int, int> sumap;
        int csum=0;
        int maxl=0;
        for(int i=0; i<n; i++){
            csum+=A[i];
            if(csum==0)maxl=i+1;
            else{
                if(sumap.find(csum)!=sumap.end()){
                    maxl=max(i-sumap[csum],maxl);
                }
                else{
                    sumap[csum]=i;
                }
            }
        }
        return maxl;
    }
};
