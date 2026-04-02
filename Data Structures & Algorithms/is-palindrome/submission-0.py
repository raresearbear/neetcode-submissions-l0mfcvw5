class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s_alnum = ""
        for c in s:
            if c.isalnum():
                s_alnum += c
        l, r = 0, (len(s_alnum) - 1)
        if len(s_alnum) // 2:
            while l < r:
                if s_alnum[l] != s_alnum[r]:
                    return False
                l += 1
                r -= 1
            return True
        else:
            while l + 1 < r - 1:
                if s_alnum[l] != s_alnum[r]:
                    return False
                l += 1
                r -= 1
            return True