class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> v;
        backtrack(nums,target, res,0,v);
        return res;
    }
    void backtrack(vector<int>& nums, int target, vector<vector<int>>& res, int i,vector<int>& v){

        if(target == 0 ){
            res.push_back(v);
            return;
        }
        if(i >= nums.size() || target < 0){
            return; 
        }
        backtrack(nums,target,res,i+1,v);
        v.push_back(nums[i]);
        backtrack(nums,target-nums[i],res,i,v);
        v.pop_back();
    }
};
