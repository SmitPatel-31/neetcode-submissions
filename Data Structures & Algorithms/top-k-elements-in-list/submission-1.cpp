class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ans;
        int n = nums.size();
        for(int i=0;i<nums.size();i++ ){
            ans[nums[i]]++;
        }
        vector<vector<int>> a(n+1);
        for(auto& i:ans){
            int freq = i.second;
            int num = i.first;

            a[freq].push_back(num);
        }
        vector<int>an;
        for(int i = n;i>=0;i--){
            if( a[i].size() ==0){
                continue;
            }
            while(a[i].size() > 0 && k>0){
                an.push_back(a[i].back());
                a[i].pop_back();
                k--;
            }
            
        }


        return an;
        
    }
};
