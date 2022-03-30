class GfG
{
    int maxLen(int arr[], int n)
    {
        HashMap<Integer, Integer> sumap=new HashMap();
        int csum=0;
        int maxl=0;
        for(int i=0; i<n;i++){
            csum+=arr[i];
            if(csum==0)maxl=i+1;
            else{
                if(sumap.get(csum)!=null){
                    maxl=Math.max(maxl, i-sumap.get(csum));
                }
                else{
                    sumap.put(csum,i);
                }
            }
        }
        return maxl;
    }
}
