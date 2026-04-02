class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> s_set;
        map<char, int> t_set;
        for (char character : s) {
            if (s_set.count(character)) {
                s_set[character]++;
            }
            else {s_set[character] = 1;  }
                      
        }
        for (char character : t) {
            if (t_set.count(character)) {
                t_set[character]++;
            }
            else{t_set[character] = 1;}      
        }
        if (s_set == t_set) {
            return true;
        }
        return false;
    }
};
