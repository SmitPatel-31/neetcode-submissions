class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            int multi = 1;
            for(int j =0;j<nums.size();j++){
                if(j==i){
                    continue;
                }else{
                    multi = multi* nums[j];
                }
                

            }

            ans.push_back(multi);
        }

        return ans;
    }
};
