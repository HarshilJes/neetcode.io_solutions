class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        vector<vector<int>> freq(nums.size()+1);
        for(int n:nums) count[n]++;
        for (const auto& entry:count){
            freq[entry.second].push_back(entry.first);
        }
        vector<int>res;
        for(int i=nums.size();i>0;--i){
            for(int num:freq[i]){
                res.push_back(num);
                if (res.size()==k) return res;
            }
        }
        return res;
    }
};  // time complexity n and space complexity n  
