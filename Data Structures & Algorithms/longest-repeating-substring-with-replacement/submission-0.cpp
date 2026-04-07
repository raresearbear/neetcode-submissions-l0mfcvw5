class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, res = 0;
        int chars[26] = {};

        while (r < s.size()) {
            int idx = s.at(r) - 'A';
            ++chars[idx];

            int biggestNum = *max_element(chars, chars + 26);

            if ((r - l + 1) - biggestNum > k) {
                --chars[s.at(l) - 'A'];
                ++l;
            }

            res = max(r - l + 1, res);
            ++r;
        }
        return res;
    }
};
