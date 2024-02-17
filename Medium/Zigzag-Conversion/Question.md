6. **Zigzag Conversion**

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)<br>

P A H N<br>
A P L S I I G<br>
Y I R<br>
And then read line by line: "PAHNAPLSIIGYIR"<br>

Write the code that will take a string and make this conversion given a number of rows:<br>

string convert(string s, int numRows);<br>

Example 1:<br>
Input: s = "PAYPALISHIRING", numRows = 3<br>
Output: "PAHNAPLSIIGYIR"<br>

Example 2:<br>
Input: s = "PAYPALISHIRING", numRows = 4<br>
Output: "PINALSIGYAHRPI"<br>
Explanation:<br>
P I N<br>
A L S I G<br>
Y A H R<br>
P I<br>

Example 3:<br>
Input: s = "A", numRows = 1<br>
Output: "A"<br>

Constraints:<br>
1 <= s.length <= 1000<br>
s consists of English letters (lower-case and upper-case), ',' and '.'.<br>
1 <= numRows <= 1000
