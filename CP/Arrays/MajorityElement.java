/*
LEET CODE 169
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-231 <= nums[i] <= 231 - 1
 

Follow-up: Could you solve the problem in linear time and in O(1) space?
 */

 class ME{

    public static int majorityElement(int[] nums) {
        int maj = (nums.length)/2;
// way 1 normal
//         int count = 1,val=nums[0];
//         Arrays.sort(nums);
        
//         for(int i=1;i<nums.length;i++) {
            
//             if(nums[i]==nums[i-1])
//                 count++;
//             else
//                 count = 1;
            
//             if(count>maj) { 
//                 val = nums[i-1];
//             }
                
//         }
        // return val
        
        // way 2 using hashmap
// HashMap<Integer,Integer> h = new HashMap<>();
        
//         for(int i=0;i<nums.length;i++) {
            
//             if(h.containsKey(nums[i])) {
                
//                 int val = h.get(nums[i]);
//                 h.put(nums[i],++val);
//             }
//             else
//                 h.put(nums[i],1);
//         }
        
        
//         int max = 0;
//         int ans = 0;

//         for(Map.Entry<Integer,Integer> m : h.entrySet()) {
            
//             if(m.getValue() > max) {
//                 max = m.getValue();
//                 ans = m.getKey();
//             }
//         }
//         return ans;
        
        
      // way 3   running till n/2  
//         int count = 1;
//         Arrays.sort(nums);
//         int ans = nums[0];
        
//         for(int i=0;i<=maj;i++) {
            
//             if(nums[i]==nums[maj+i]) {
//                 ans = nums[i];
//                 break;
//             }
                
//         }
//         return ans;
        
        
        // way 4  direct middle element
        Arrays.sort(nums);
        return nums[maj];
    }
     public static void main(String[] args) {
         int[] nums= {2,2,1,1,1,2,2};
         System.out.println(majorityElement(nums));
         
     }
 }