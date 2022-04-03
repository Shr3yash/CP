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


//BottomUp

class Solution {
     public int deleteAndEarn(int[] nums) 
     {
         HashMap<Integer, Integer> freq = new HashMap();
         int maxValue=0;
         
         for(Integer num : nums)
         {
             freq.put(num, freq.getOrDefault(num, 0)+num);
             maxValue = Math.max(maxValue, num);
         }
         
         int[] maxReturn = new int[maxValue+1];
         
         maxReturn[0] = 0; //unnecessary
         maxReturn[1] = freq.getOrDefault(1, 0);
         
         for(int i = 2; i<=maxValue; i++)
         {
             int gain = freq.getOrDefault(i, 0);
             int pick = gain + maxReturn[i-2];
             int notpick = maxReturn[i-1];
             maxReturn[i] =  Math.max(pick, notpick);
         }
        
         return maxReturn[maxValue];
     }
}

//space optimuzation

class Solution {
     public int deleteAndEarn(int[] nums) 
     {
         HashMap<Integer, Integer> freq = new HashMap();
         Integer maxValue = 0;
         
         for(Integer num : nums)
         {
             freq.put(num, freq.getOrDefault(num, 0)+num);
             maxValue = Math.max(maxValue, num);
         }
         
         int prev =  freq.getOrDefault(1, 0);
         int prev1 = 0;
         
         for(int i = 2; i<=maxValue; i++)
         {
             int gain = freq.getOrDefault(i, 0);
             // int cur = Math.max(prev + gain, prev1);
             // prev = cur;
             // prev1 = prev; 
             
             int temp = prev;
             prev =  Math.max(prev1 + gain, prev);
             prev1 = temp;
            
             
         }
         return prev;
     }
}
