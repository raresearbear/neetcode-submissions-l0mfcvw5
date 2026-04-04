class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix = {1};
        vector<int> suffix = {1};
        vector<int> prods;

        // build prefix products left to right
        for (int i = 0; i < n - 1; i++) {
            prefix.push_back(prefix.back() * nums[i]);
        }

        // build suffix products right to left
        for (int i = n - 1; i > 0; i--) {
            suffix.push_back(suffix.back() * nums[i]);
        }

        // suffix was built in reverse, so pair them correctly
        for (int i = 0; i < n; i++) {
            prods.push_back(prefix[i] * suffix[n - 1 - i]);
        }

        return prods;
    }
};
