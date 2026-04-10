class Solution {
    public boolean isAnagram(String s, String t) {
        s.toLowerCase();
        t.toLowerCase();
        int[] sArr = new int[26];
        int[] tArr = new int[26];

        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            int sIdx = s.charAt(i) - 97;
            int tIdx = t.charAt(i) - 97;
            sArr[sIdx]++;
            tArr[tIdx]++;
        }
        if (Arrays.equals(sArr, tArr)) {
            return true;
        }
        return false;
    }
}
