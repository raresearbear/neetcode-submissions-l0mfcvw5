class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> set = new HashSet<>();

        for (int element : nums) {
            set.add(element);
        }

        if (set.size() == nums.length) {
            return false;
        }
        return true;
    }
}