class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0 , right=0 ;
        int max = 0, delta=0; 
        while (left <= right && right < prices.size()){
            delta = prices[right]- prices[left]; 
            if(delta < 0){
                left = right; 
            }else {
                if(max < delta){
                    max = delta; 
                }
            }
            right++;
        }
        return max;

    }
};
