class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numSet;
        for (int i {0}; i < nums.size(); i++) {
            int num = nums[i];
            int hit = target - num;
            if (numSet.contains(hit)) {
                return {numSet[hit], i};
            }
            numSet[num] = i;
        }
    }
};
