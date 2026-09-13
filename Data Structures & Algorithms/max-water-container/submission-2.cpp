class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxWater = 0;
        
        int tempWater = 0;
        int i = 0;
        int j = nums.size()-1;

        while(i<j){
            if(nums[i]<=nums[j]){
                tempWater = (j - i) * min(nums[i],nums[j]);
                maxWater = max(tempWater,maxWater);
                i++;
            }else{
                tempWater = (j - i) * min(nums[i],nums[j]);
                maxWater = max(tempWater,maxWater);
                j--;
            }
            
        }
        return maxWater;
    }
};
