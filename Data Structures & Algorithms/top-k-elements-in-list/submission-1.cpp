class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> seen;
        for (auto num : nums) {
            seen[num]++; 
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

        for (auto& [num, freq] : seen) {
            pq.push({freq, num});
            if (pq.size() > k) pq.pop(); 
        }

        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};