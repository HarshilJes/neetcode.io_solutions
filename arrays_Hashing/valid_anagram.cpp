class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpps;
        map<char,int>mppt;
        for(char c:s) mpps[c]++;
        for(char x:t) mppt[x]++;
        if (mpps==mppt) return true;
        return false;
    }
};
