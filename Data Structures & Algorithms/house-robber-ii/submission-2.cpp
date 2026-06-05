class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if (len == 1) return nums[0];
        int prev1_f = 0;
        int prev2_f = 0;

        int prev1_l = 0;
        int prev2_l = 0;
       
        int curr_f;
        int curr_l;

        int take_f,skip_f;
        int take_l,skip_l;
        for(int i=0; i<len; i++){
            if(i!=len-1){
                take_f = nums[i] + prev2_f; 
                skip_f = prev1_f;

                curr_f = max(take_f,skip_f);
            

                prev2_f = prev1_f;
                prev1_f = curr_f;

            }
            if(i!=0){
                take_l = nums[i] + prev2_l; 
                skip_l = prev1_l;

                curr_l = max(take_l,skip_l);

                prev2_l = prev1_l;
                prev1_l = curr_l;

            }
            
           
        }


        return max(prev1_f,prev1_l);
        
        
        
    }
};

