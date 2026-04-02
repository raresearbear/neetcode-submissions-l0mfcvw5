class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for i in range(len(s)):
            if s[0] in [")", "]", "}"]:
                return False
            if s[i] == ")":
                if stack and stack[-1] == "(":
                    stack.pop()
                else:
                    return False
            elif s[i] == "]":
                if stack and stack[-1] == "[":
                    stack.pop()
                else:
                    return False
            elif s[i] == "}":
                if stack and stack[-1] == "{":
                    stack.pop()
                else:
                    return False
            else:
                stack.append(s[i])
        if stack == []:
            return True
        else:
            return False