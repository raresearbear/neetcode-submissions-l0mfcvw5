#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> seen;
        for (int i = 0; i < nums.size(); i++) {
            if (seen.contains(nums.at(i))) {
                return true;  // duplicate found
            }
            seen.insert(nums.at(i));
        }
        return false;  // no duplicates
    }
};