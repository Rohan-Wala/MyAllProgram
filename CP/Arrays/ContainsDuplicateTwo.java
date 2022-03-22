/*
LEETCODE 219
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

 

Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
0 <= k <= 105
*/

class CD2{
    public static boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer, Integer> h = new HashMap<>();
        Integer preval;
        for(int i = 0;i<nums.length;i++){
            if((preval = h.put(nums[i],i)) != null)
                if(Math.abs(preval - i) <= k)
                    return true;
        }
        return false;
    }
    public static void main(String[] args) {
        int[] nums = {1,2,3,1,2,3};
        int k = 2;
        System.out.println(containsNearbyDuplicate(nums, k);
    }
}