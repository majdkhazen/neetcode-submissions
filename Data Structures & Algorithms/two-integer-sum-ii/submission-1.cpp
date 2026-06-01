class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        vector<int> res;
        while (i<j){
            int first = numbers[i], last=numbers[j];
            int sum = first + last; 
            if (sum == target){
                res = {i+1,j+1};
                return res;
            }
            if(sum < target){
                i++;
                continue;
            }else{
                j--;
                continue;
            }
        }
        return {0,0};
    }
};
