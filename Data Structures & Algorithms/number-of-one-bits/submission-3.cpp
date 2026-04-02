class Solution {
public:
    int hammingWeight(uint32_t n) {
        int x = {0};
        int y = {0};
        while (pow(2,x) <= n) {
            ++x;
        }
        --x;
        while (n > 0) {
            if (pow(2,x) > n) {
                --x;
                continue;
            }
            n -= pow(2,x);
            ++y;
        }
        return y;
    }
};
