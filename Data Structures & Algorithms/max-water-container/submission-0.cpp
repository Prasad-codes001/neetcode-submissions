class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxA=0;
        int l = 0, r = n-1;
        while(l<r){
            int h = min(heights[l],heights[r]);
            int w = r-l;
            maxA = max(maxA, w*h);
            if(heights[l] > heights[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return maxA;
    }
};
