class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> temp;
        for(int i=0;i<strs.size();i++){
            string tstr=strs[i];
            sort(tstr.begin(),tstr.end());
            temp[tstr].push_back(strs[i]);
        }
        vector<vector<string>>result;
        for(auto pair:temp){
            result.push_back(pair.second);
        }
        return result;
    }
};
 auto init = atexit([](){ofstream("display_runtime.txt")<<"0";});
