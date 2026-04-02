class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seenSet = {}
        for i in range(len(nums)):
            sol = target - nums[i] 
            if sol in seenSet:
                res = [seenSet[sol], i]
                res.sort()
                return res
            seenSet[nums[i]] = i