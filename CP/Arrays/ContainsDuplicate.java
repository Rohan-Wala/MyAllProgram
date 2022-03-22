/*
LEETCODE 217
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Input: nums = [1,2,3,1]
Output: true

Input: nums = [1,2,3,4]
Output: false

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/
import java.util.Arrays;
import java.util.HashSet;
class CD {
    public static boolean containsDuplicate(int[] nums) {
        //best one 
       HashSet h = new HashSet();
        for(int i=0;i<nums.length;i++){
            if(h.add(nums[i]) == false)
                return true;
        }
        return false;
        /* 
        //time complexity is more 
        Arrays.sort(nums);
        
        for(int i=0;i<nums.length;i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
        */
    }

    public static void main(String[] args) {
        int[] nums = {1,1,1,3,3,4,3,2,4,2};
        System.out.println(containsDuplicate(nums));

    }
}