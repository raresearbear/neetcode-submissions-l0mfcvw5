class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) == len(t):
            sCharSet = {}
            tCharSet = {}
            for i in range(len(s)):
                if s[i] in sCharSet:
                    sCharSet[s[i]] += 1
                else:
                    sCharSet[s[i]] = 1
                if t[i] in tCharSet:
                    tCharSet[t[i]] += 1
                else:
                    tCharSet[t[i]] = 1
            if tCharSet == sCharSet:
                return True

        return False
