class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> idx(nums.size() + 1);  // +1 so freq can equal nums.size()
        map<int, int> seen;

        for (auto num : nums) {
            seen[num]++;
        }

        for (auto& [key, val] : seen) {
            idx[val].push_back(key);
        }

        vector<int> result;
        for (int i = idx.size() - 1; i >= 0; i--) {  // iterate from highest freq
            for (auto num : idx[i]) {
                result.push_back(num);
                if (result.size() == k) return result;  // stop once we have k
            }
        }

        return result;
    }
};