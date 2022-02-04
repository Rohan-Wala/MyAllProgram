/*
LEET CODE problem 26
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

import java.util.*;
class RDSA {
    
    public static int removeDuplicates(int[] nums) {
       /*
       //using hash map
       if(nums.length == 0)
            return 0;
        HashMap< Integer, Integer > h = new HashMap<>();
        int cnt =0;
        for(int i=0;i<nums.length;i++){
            if(h.put(nums[i],i+1) == null){
                nums[cnt] = nums[i];
                cnt++;
            }
        }
        return cnt;
        */
        /*
        Since the array is already sorted, we can keep two pointers ii and jj, where ii is the slow-runner while jj is the fast-runner. 
        As long as nums[i] = nums[j]nums[i]=nums[j], we increment jj to skip the duplicate.

        When we encounter nums[j] \neq nums[i]nums[j]!=nums[i], the duplicate run has ended so we must copy its value to nums[i + 1]nums[i+1]. i is then incremented and we repeat the same process again until j reaches the end of array.
        //best we get leetcode solution 
        public int removeDuplicates(int[] nums) {
            if (nums.length == 0) return 0;
            int i = 0;
            for (int j = 1; j < nums.length; j++) {
                if (nums[j] != nums[i]) {
                    i++;
                    nums[i] = nums[j];
                }
            }
            return i + 1;
        }
        */
        
        int i=1;
        int j=1;
        
        if(nums.length == 0)
            return 0;
        int var = nums[0];
        while(j<nums.length){
            if(nums[j] == var){
                j++;
            }else if(nums[j] != var){
                var = nums[j];
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j++;
                }
        }
        return i;
        
    }
    
    public static void main(String[] args) {
        int[] arr = {0,0,1,1,1,2,2,3,3,4};
        System.out.println(removeDuplicates(arr));
    }
}
