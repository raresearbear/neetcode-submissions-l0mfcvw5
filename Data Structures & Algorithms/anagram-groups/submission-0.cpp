#include <array>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> m;

        for (auto word : strs) {
            array<int, 26> charSet = {0};  
            for (char c : word) {
                charSet[c - 'a']++;
            }
            m[charSet].push_back(word);  
        }

        vector<vector<string>> values;
        for (auto& [key, val] : m) {
            values.push_back(val);
        }
        return values;
    }
};