class Solution {
    
    private HashMap <Integer, Integer> freq =  new HashMap();
    private HashMap <Integer, Integer> cache =  new HashMap();
    
    //topdown
    
    private int maxReturn(int num)
    {
        if(num==0) return 0;
        if(num==1) return freq.getOrDefault(1, 0); //Considering the map till 0 to 1 only so take 1 if there exists to return the maximum value as points at 1 will always be more than at 0.
        
        if(cache.containsKey(num)) return cache.get(num); //Recurring subproblems
        
        int gain = freq.getOrDefault(num, 0);
        int pick =  gain + maxReturn(num-2);
        int notpick = maxReturn(num-1);
        
        cache.put(num, Math.max(pick, notpick));
        
        return cache.get(num);
    }
    
    public int deleteAndEarn(int[] nums) 
    {
        int maxValue=0;
        //compute how  many points are we gonna gain from each element according to their num of occurence 
        for(int num : nums){
            freq.put(num, freq.getOrDefault(num, 0)+num);
            maxValue = Math.max(maxValue, num); // for initiating topdown
        }
        
        return maxReturn(maxValue);
    }
}
