class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++){
    for(int i=0; i<nums.size()-1; i++){
        if(nums[i]>nums[i+1]) 
        (swap(nums[i], nums[i+1])) ;
    }}
    return nums;
    }
};


//Optimanzee

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    bool swapp = false;
    for(int i=0; i<nums.size(); i++){
        for(int i=0; i<nums.size()-1; i++)
            {
            if(nums[i]>nums[i+1]) 
                {
                (swap(nums[i], nums[i+1])) ;
                swapp =true;           
                }
            }
            if (!swapp) break;      //if there's no swap in any turn then break.
        }
    return nums;
    }
};
