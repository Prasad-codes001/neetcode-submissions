class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(char c : s){
            if(isalnum(c)){
                ans += tolower(c);
            }
        }
        string original = ans;
        reverse(ans.begin(), ans.end());
        return ans == original;
    }
};
