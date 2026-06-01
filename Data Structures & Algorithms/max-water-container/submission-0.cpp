class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0 , right = heights.size()-1, max=0;
        while(left < right){
            int len=0;
            if(heights[left] < heights[right])
                len = heights[left] * (right - left++);
            else
                len = heights[right] * (right-- - left);
            
            max = max > len ? max : len;
        }
        return max;
    }
};
