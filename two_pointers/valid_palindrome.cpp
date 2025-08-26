class Solution {
public:
    bool isPalindrome(string s) {
        for(char &str:s) str=tolower(str);
        for(auto it=s.begin();it!=s.end();){
            if (!isalnum(*it)) it=s.erase(it);
            else ++it;
        }
        int i=0,j=s.size()-1;
        while(i<=j){
            if (s[i]!=s[j]) return false;
            i++;
            j--;
        }
        for(char str:s) {cout<<str<<" ";}
        return true;
    }
};
