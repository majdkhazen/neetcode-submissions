class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int hold = - prices[0]; 
        int sold = 0;
        int rest =0; 

        for(int i=1; i<prices.size(); i++){
            int p = prices[i];
            int newhold = max(hold, rest - p);
            int newsold = hold+p;
            int newrest = max(rest,sold);

            hold = newhold; 
            sold = newsold; 
            rest = newrest;
        }

        return max(sold,rest);
    }
};
