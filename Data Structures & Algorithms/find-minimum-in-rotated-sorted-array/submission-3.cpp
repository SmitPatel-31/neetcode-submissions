class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid = (low + high) /2;
        int ans = INT_MAX;
        while(low <= high){

            ans = min(ans,nums[mid]);

            if(nums[mid]> nums[high]){
                low = mid +1;
                mid = (low + high)/2;
            }
            else{
                high = mid -1;
                mid = (low + high) /2;
            }

        }


        return ans;
    }
};
