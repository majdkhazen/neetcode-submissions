class Solution {
public:
    int trap(vector<int>& height) {
     int lev=0, past_lev = 0, res=0;
    int i=0 , j=height.size()-1;
    while (i <= j){
        lev = height[j] < height[i] ? height[j] : height[i];
        if(lev > past_lev){
            res += (lev - past_lev) * (j - i + 1);
            past_lev = lev;
        }

        if(height[i] < height[j]){
            res -= (height[i]-lev) > 0 ? lev : height[i++];
        }else{
            res -= (height[j]-lev) > 0 ? lev : height[j--];
        }
    }
    return res;
}

};
