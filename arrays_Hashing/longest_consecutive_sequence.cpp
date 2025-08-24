class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(),nums.end());
        int res=0;

        for(int num:store){
            if(store.find(num-1)==store.end()){
                int streak=0,curr=num;
                while(store.find(curr)!=store.end()){
                    curr++;
                    streak++;
                }
                res=max(res,streak);
            }
        }
        return res;
    }
};
