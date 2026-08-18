class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1,0);
        if(n<=0) return {0};
        res[0] = 0;
        res[1] = 1;
        for (int i=2; i<=n; i++){
            res[i] = res[i>>1]+(i%2);
        }
        return res;
    }
};
