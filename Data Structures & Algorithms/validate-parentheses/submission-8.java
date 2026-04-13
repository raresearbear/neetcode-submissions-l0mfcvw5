class Solution {
    public boolean isValid(String s) {
        List<Character> stack = new LinkedList<>();
        if (s.charAt(0) == ']' || s.charAt(0) == ')' || s.charAt(0) == '}') {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ')') {
                if (!stack.isEmpty() && stack.getLast() == '(') {
                    stack.removeLast();
                } else {
                    return false;
                }
            } else if (s.charAt(i) == '}') {
                if (!stack.isEmpty() && stack.getLast() == '{') {
                    stack.removeLast();
                } else {
                    return false;
                }
            } else if (s.charAt(i) == ']') {
                if (!stack.isEmpty() && stack.getLast() == '[') {
                    stack.removeLast();
                } else {
                    return false;
                }
            } else {
                stack.addLast(s.charAt(i));
            }
        }
        return stack.isEmpty();
    }
}