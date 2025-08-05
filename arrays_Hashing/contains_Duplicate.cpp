class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,int> mpp;
        for(int x:nums) mpp[x]++;
        for(auto &[x,f]:mpp){
            if (f>1) return true;
        }
        return false;

    }
};
