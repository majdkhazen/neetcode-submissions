class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
    int sum = 1;
    int zero =0; 
    vector<int> res(nums.size(), 0);
    for(int n : nums){
        if(n == 0){
            zero++;
            continue;
        }
        sum*=n;
    }
    if(zero > 1){
        return res; // all elements will be zero
    }
    for(int i=0; i< nums.size(); i++){
        if(nums[i] == 0){
            res[i] = sum; 
            continue;
        }
        else if(zero == 1){
            res[i] = 0; // if there is one zero, the product is zero
            continue;
        }
        res[i] =(sum/nums[i]);
    }
    return res;
}
};
