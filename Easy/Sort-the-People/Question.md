2418. **Sort the People**

You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.<br>

For each index i, names[i] and heights[i] denote the name and height of the ith person.<br>

Return names sorted in descending order by the people's heights.<br>

Example 1:<br>
Input: names = ["Mary","John","Emma"], heights = [180,165,170]<br>
Output: ["Mary","Emma","John"]<br>
Explanation: Mary is the tallest, followed by Emma and John.<br>

Example 2:<br>
Input: names = ["Alice","Bob","Bob"], heights = [155,185,150]<br>
Output: ["Bob","Alice","Bob"]<br>
Explanation: The first Bob is the tallest, followed by Alice and the second Bob.<br>

Constraints:<br>
n == names.length == heights.length<br>
1 <= n <= 103<br>
1 <= names[i].length <= 20<br>
1 <= heights[i] <= 105<br>
names[i] consists of lower and upper case English letters.<br>
All the values of heights are distinct.
