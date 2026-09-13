class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxWater = 0;
        
        for(int i=0;i<nums.size()-1;i++){
            int tempWater = 0;
            for(int k=0;k<nums.size();k++){
                int len = k - i;
                int height = min(nums[i],nums[k]);

                tempWater = len* height;

                maxWater = max(maxWater,tempWater);
            }
        }
        return maxWater;
    }
};
