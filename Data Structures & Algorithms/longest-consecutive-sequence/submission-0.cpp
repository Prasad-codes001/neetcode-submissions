class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for(int num : nums){
            if(st.find(num-1) == st.end()){
                int cnt = 1;
                while(st.find(num+cnt) != st.end()){
                    cnt++;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
