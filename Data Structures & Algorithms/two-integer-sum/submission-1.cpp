class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> hash;
    // put all the numbers in the set
    for(int i=0;i< nums.size();i++ ){
        hash[nums[i]]=i;
    }
    for(int i=0; i<nums.size(); i++){
        if(hash.find(target - nums[i])!= hash.end()){
            if(hash[target - nums[i]] == i){
                continue; 
            }
            return {i,hash[target - nums[i]]};
        }
    }
    }
};
