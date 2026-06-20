class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        left = 0
        right = len(nums)-1
        if len(nums) <= 1 :
            return None

        while left<right: 
            while nums[left]+nums[right] > target: 
                right-=1

            if nums[left]+nums[right] == target:
                result = []
                result.append(left+1)
                result.append(right+1)
                return result
            else:
                left+=1