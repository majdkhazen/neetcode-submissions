class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> newVec; 
        vector<vector<int>> toret;
        backTrack(toret, nums, newVec, 0);
        return toret;
    }

    void backTrack( vector<vector<int>>& toret,vector<int>& nums, vector<int> newVec ,int index){
        if(index == nums.size()){
            toret.push_back(newVec);
        }else{
            backTrack(toret, nums, newVec, index+1);
            newVec.push_back(nums[index]);
            backTrack(toret, nums, newVec, index+1);
        }
    }
};