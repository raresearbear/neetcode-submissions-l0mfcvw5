class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> seen = new HashMap<>();
        for (String s : strs) {
            String key = Arrays.toString(charCount(s));
            if (seen.containsKey(key)) {
                seen.get(key).add(s);
            } else {
                List<String> anagrams = new ArrayList<>();
                anagrams.add(s);
                seen.put(key, anagrams);
            }
        }
        return new ArrayList<>(seen.values());
    }

    public int[] charCount(String s) {
        int[] arr = new int[26];
        for (int i = 0; i < s.length(); i++) {
            int sIdx = s.charAt(i) - 97;
            arr[sIdx]++;
        }
        return arr;
    }
}