class Solution {
public:
    int findMin(vector<int> &nums) {
        sort(nums.begin(),nums.end());
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++){
            ans = min(nums[i],ans);
        }

        return ans;
    }
};
