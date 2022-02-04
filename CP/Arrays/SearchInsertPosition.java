/*
LEET CODE problem 35
Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Input: nums = [1,3,5,6], target = 5
Output: 2

Input: nums = [1,3,5,6], target = 2
Output: 1

Input: nums = [1,3,5,6], target = 7
Output: 4

*/
class SIP{

    public static  int searchInsert(int[] nums, int target) {

        //our solution O(n)
        // int ind=0;
        // for(int i=0;i<nums.length;i++){
        //     if(nums[i] >= target)
        //       return i; 
        // }
        int i=0;
         int j= nums.length-1;
        while (i <= j) {
            int mid = (i + j)/ 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                i = mid + 1;
            } else if (nums[mid] > target) {
              j = mid - 1;
            }
            
            if(i > j)
                return i;
          }

        return nums.length;
    }
    public static void main(String[] args) {
        int[]  nums = {1,3,5,6};
        System.out.println(searchInsert(nums, 2));
    }
}
