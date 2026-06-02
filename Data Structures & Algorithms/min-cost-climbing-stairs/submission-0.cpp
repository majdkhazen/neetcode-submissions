class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        vector<int> v(len);
        v[0] = cost[0];
        v[1] = cost[1];
        for(int i=2; i<len; i++){
            v[i]=min(v[i-1]+cost[i],v[i-2]+cost[i]);
        }
        return min(v[len-1],v[len-2]);
    }
};
