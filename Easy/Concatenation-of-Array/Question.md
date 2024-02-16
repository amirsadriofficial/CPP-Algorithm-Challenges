1929. **Concatenation of Array**

Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).<br>

Specifically, ans is the concatenation of two nums arrays.<br>

Return the array ans.<br>

 

Example 1:<br>
Input: nums = [1,2,1]<br>
Output: [1,2,1,1,2,1]<br>
Explanation: The array ans is formed as follows:<br>
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]<br>
- ans = [1,2,1,1,2,1]<br>

Example 2:<br>
Input: nums = [1,3,2,1]<br>
Output: [1,3,2,1,1,3,2,1]<br>
Explanation: The array ans is formed as follows:<br>
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]<br>
- ans = [1,3,2,1,1,3,2,1]<br>

Constraints:<br>
n == nums.length<br>
1 <= n <= 1000<br>
1 <= nums[i] <= 1000
